	@ data/text/trainers.inc:2432 Route123_Text_CameronRegister
	.globl gText_Rom_25FAFF
gText_Rom_25FAFF: @ 0x0825FAFF
	.string "ぼくには わかる!\nぼくと きみとは また しょうぶする!\lかてるか わかんない けど……\pポケナビを だして!$"
	.if (. - gText_Rom_25FAFF) > 0x39
	.error "gText_Rom_25FAFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FAFF) < 0x39
	.space 0x39 - (. - gText_Rom_25FAFF)
	.endif
