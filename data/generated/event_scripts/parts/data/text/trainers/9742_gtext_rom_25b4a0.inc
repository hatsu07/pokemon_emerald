	@ data/text/trainers.inc:758 Route110_Text_BenjaminRematchIntro (+1 aliases)
	.globl gText_Rom_25B4A0
gText_Rom_25B4A0: @ 0x0825B4A0
	.string "おっ! スピード だしすぎ じゃない?\nちょっと のんびり しょうぶ しようよ!$"
	.if (. - gText_Rom_25B4A0) > 0x29
	.error "gText_Rom_25B4A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B4A0) < 0x29
	.space 0x29 - (. - gText_Rom_25B4A0)
	.endif
