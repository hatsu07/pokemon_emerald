	@ data/maps/RustboroCity/scripts.inc:1232 RustboroCity_Text_DevonCorpSign
	.globl gText_Rom_1DFB27
gText_Rom_1DFB27: @ 0x081DFB27
	.string "「デボン コーポレーション」\pみなさんの せいかつの ために\nなんでも つくっています!$"
	.if (. - gText_Rom_1DFB27) > 0x2d
	.error "gText_Rom_1DFB27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFB27) < 0x2d
	.space 0x2d - (. - gText_Rom_1DFB27)
	.endif
