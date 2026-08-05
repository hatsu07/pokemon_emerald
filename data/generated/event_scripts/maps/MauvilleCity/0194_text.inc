	@ data/maps/MauvilleCity/scripts.inc:578 MauvilleCity_Text_WattsonNeedFavorTakeKey
	.globl gText_Rom_1DE2EE
gText_Rom_1DE2EE: @ 0x081DE2EE
	.string "テッセン『おお {PLAYER}{KUN}\nげんきそうに しておるのう\lわっはははは! いいこと じゃよ!\pよしっ! きめた!\n{PLAYER}{KUN}に おねがいを するぞい!\pじつは この キンセツには\nニューキンセツ という ちかとしが ある\pで {PLAYER}{KUN} には\nそこの はつでんそうちの スイッチを\lきってきて ほしいんじゃよ!\pさいきん はつでんそうちが\nぼうそうぎみで なにかと あぶないからのう\pほら これが ニューキンセツの\nとびらを あける カギじゃ!$"
	.if (. - gText_Rom_1DE2EE) > 0xdb
	.error "gText_Rom_1DE2EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE2EE) < 0xdb
	.space 0xdb - (. - gText_Rom_1DE2EE)
	.endif
