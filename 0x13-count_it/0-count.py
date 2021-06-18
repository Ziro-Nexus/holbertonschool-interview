#!/usr/bin/python3
"""Count it
"""
import requests


def recurse(subreddit, word_list, ht, after=""):
	"""
		doc
	"""
	url = "https://www.reddit.com/r/{}/hot.json?after={}".format(subreddit,
																 after)
	res = requests.get(url,
					   headers={'User-agent': 'product'},
					   allow_redirects=False)

	if res.status_code != 200:
		return None
	if after is None:
		return ht

	for i in res.json().get('data').get('children'):
		title_s = i.get('data').get('title').split()
		for word in set(word_list):
			if word.lower() in [x.lower() for x in title_s]:
				if ht.get(word):
					ht[word] += 1
				else:
					ht[word] = 1

	after = res.json().get('data').get('after')
	recurse(subreddit, word_list, ht, after)
	return ht


def count_words(subreddit, word_list):
	"""
		doc
	"""
	ht = recurse(subreddit, word_list, {})
	if ht:
		for k, v in sorted(ht.items(), key=lambda val: val[1],
						   reverse=True):
			if v != 0:
				print('{}: {}'.format(k, v))
