	@ data/maps/OldaleTown/scripts.inc:371 OldaleTown_Text_DiscoveredFootprints
	.globl gText_Rom_1E4B8B
gText_Rom_1E4B8B: @ 0x081E4B8B
	.string "めずらしい ポケモンの あしあとを\nはっけん したんだ!\lスケッチが おわるまで まっててくれよ$"
	.if (. - gText_Rom_1E4B8B) > 0x31
	.error "gText_Rom_1E4B8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4B8B) < 0x31
	.space 0x31 - (. - gText_Rom_1E4B8B)
	.endif
