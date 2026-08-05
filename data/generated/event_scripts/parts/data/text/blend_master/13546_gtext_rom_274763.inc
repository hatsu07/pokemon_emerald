	@ data/text/blend_master.inc:11 BerryBlender_Text_TooBusyNowIsee
	.globl gText_Rom_274763
gText_Rom_274763: @ 0x08274763
	.string "ふむむむっ!\pいまは いそがしいのじゃな!\pあんしん するのじゃ!\nわしは きょう ずっと ここに おる\lようが すんだら すぐに くるのじゃぞ!$"
	.if (. - gText_Rom_274763) > 0x4a
	.error "gText_Rom_274763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274763) < 0x4a
	.space 0x4a - (. - gText_Rom_274763)
	.endif
