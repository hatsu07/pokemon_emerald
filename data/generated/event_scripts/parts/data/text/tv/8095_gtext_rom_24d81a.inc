	@ data/text/tv.inc:1069 SlateportCity_OceanicMuseum_1F_Text_InterviewRequest
	.globl gText_Rom_24D81A
gText_Rom_24D81A: @ 0x0824D81A
	.string "おや?\nあなたも ポケモンのことが おすきで?\pわたくし テレビきょくの もので\nさいきん おきた\pトレーナーと ポケモンの できごとを\nきいて まわって いるのです\pもし よければ なにか\nはなしを きかせて くれませんかね?$"
	.if (. - gText_Rom_24D81A) > 0x73
	.error "gText_Rom_24D81A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D81A) < 0x73
	.space 0x73 - (. - gText_Rom_24D81A)
	.endif
