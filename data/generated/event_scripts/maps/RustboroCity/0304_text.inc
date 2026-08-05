	@ data/maps/RustboroCity/scripts.inc:1242 RustboroCity_Text_DevonCorpBranchOfficeSign
	.globl gText_Rom_1DFB7E
gText_Rom_1DFB7E: @ 0x081DFB7E
	.string "「デボン コーポレーション ぶんしつ」\pかんけいしゃ いがいの たちいりは\nどうぞ ごえんりょ ください!$"
	.if (. - gText_Rom_1DFB7E) > 0x36
	.error "gText_Rom_1DFB7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFB7E) < 0x36
	.space 0x36 - (. - gText_Rom_1DFB7E)
	.endif
