	@ data/maps/MauvilleCity/scripts.inc:627 MauvilleCity_Text_RydelVeryGenerous
	.globl gText_Rom_1DE53B
gText_Rom_1DE53B: @ 0x081DE53B
	.string "あなた サイクルショップ には\nもう いってみた?\pあそこの ごしゅじんの カゼノさんは\nすごく きまえが いいのよね!$"
	.if (. - gText_Rom_1DE53B) > 0x3d
	.error "gText_Rom_1DE53B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE53B) < 0x3d
	.space 0x3d - (. - gText_Rom_1DE53B)
	.endif
