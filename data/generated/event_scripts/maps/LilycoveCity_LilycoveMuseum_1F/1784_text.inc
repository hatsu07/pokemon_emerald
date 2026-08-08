	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:164 LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
	.globl gText_Rom_205DBB
gText_Rom_205DBB: @ 0x08205DBB
	.string "わたしは この びじゅつかんの\nかんちょう です!\pあなたは おわかいのに びじゅつかんに\nいらっしゃる とは かんしん ですね!\pもう えは ごらんに なりましたか?$"
	.if (. - gText_Rom_205DBB) > 0x55
	.error "gText_Rom_205DBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205DBB) < 0x55
	.space 0x55 - (. - gText_Rom_205DBB)
	.endif
