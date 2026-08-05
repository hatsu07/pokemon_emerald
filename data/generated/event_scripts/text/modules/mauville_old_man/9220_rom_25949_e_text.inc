	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_25949E
gText_Rom_25949E: @ 0x0825949E
	.string "うみの　そこって　どうなってるのかなー\nいちどで　いいから　みて　みたいなー"
	.byte EOS
	.if (. - gText_Rom_25949E) > 0x27
	.error "gText_Rom_25949E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25949E) < 0x27
	.space 0x27 - (. - gText_Rom_25949E)
	.endif
