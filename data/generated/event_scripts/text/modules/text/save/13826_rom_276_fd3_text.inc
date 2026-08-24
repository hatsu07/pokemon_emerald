	@ data/text/save.inc:18 gText_DifferentSaveFile
	.globl gText_DifferentSaveFile
gText_DifferentSaveFile: @ 0x08276FD3
	.string "ちゅうい!!\p『つづきから はじめる』で\nぼうけん していた レポートが\lかかれています!\pそちらで プレイしていた ぼうけんや\nすべての ポケモン どうぐ などが\lきえてしまいます……\pほんとうに\nうえから かいても いいですか?{EOS}"
	.if (. - gText_DifferentSaveFile) > 0x75
	.error "gText_DifferentSaveFile may not grow beyond its original slot"
	.endif
	.if (. - gText_DifferentSaveFile) < 0x75
	.space 0x75 - (. - gText_DifferentSaveFile)
	.endif
