	@ data/text/apprentice.inc:706 gText_ApprenticeMoveThanks5
	.globl gText_Rom_271EAC
gText_Rom_271EAC: @ 0x08271EAC
	.string "オーケー わかった!\nじゃ スケジュール あけて\lおぼえさせて みるぜ!\pほんと きみって いい せんせい だぜ\nサンキュー! じゃ またな!$"
	.if (. - gText_Rom_271EAC) > 0x48
	.error "gText_Rom_271EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271EAC) < 0x48
	.space 0x48 - (. - gText_Rom_271EAC)
	.endif
