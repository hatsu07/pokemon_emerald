	@ data/text/trainers.inc:731 Route110_Text_JacobDefeated (+1 aliases)
	.globl gText_Rom_25B39F
gText_Rom_25B39F: @ 0x0825B39F
	.string "キキーッ!\nブレーキが こしょうした!{EOS}"
	.if (. - gText_Rom_25B39F) > 0x14
	.error "gText_Rom_25B39F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B39F) < 0x14
	.space 0x14 - (. - gText_Rom_25B39F)
	.endif
