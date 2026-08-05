	@ data/text/save.inc:18 gText_DifferentSaveFile
	.globl gText_Rom_276FD3
gText_Rom_276FD3: @ 0x08276FD3
	.string "ちゅうい!!\p『つづきから はじめる』で\nぼうけん していた レポートが\lかかれています!\pそちらで プレイしていた ぼうけんや\nすべての ポケモン どうぐ などが\lきえてしまいます……\pほんとうに\nうえから かいても いいですか?$"
	.if (. - gText_Rom_276FD3) > 0x75
	.error "gText_Rom_276FD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276FD3) < 0x75
	.space 0x75 - (. - gText_Rom_276FD3)
	.endif
