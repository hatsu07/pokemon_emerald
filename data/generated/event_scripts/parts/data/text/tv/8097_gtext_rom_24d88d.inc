	@ data/text/tv.inc:1072 SlateportCity_OceanicMuseum_1F_Text_InterviewRequestShort
	.globl gText_Rom_24D88D
gText_Rom_24D88D: @ 0x0824D88D
	.string "いま さいきん おきた\nトレーナーと ポケモンの できごとを\lきいて まわって いるのですが\pもし よければ なにか\nはなしを きかせて くれませんかね?$"
	.if (. - gText_Rom_24D88D) > 0x4e
	.error "gText_Rom_24D88D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D88D) < 0x4e
	.space 0x4e - (. - gText_Rom_24D88D)
	.endif
