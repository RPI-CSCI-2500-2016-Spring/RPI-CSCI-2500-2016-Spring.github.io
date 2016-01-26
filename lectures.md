---
layout: page
title: Lectures
---

{% for lec in site.categories["lecture"] %}
<a href="{{lec.url}}">{{ lec.title }}</a> posted on: {{ lec.date | date: '%B %d, %Y' }}
{% endfor %}
