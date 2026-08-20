	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:916 Route110_TrickHousePuzzle5_Text_DisappointmentError
	.globl gText_Rom_23F993
gText_Rom_23F993: @ 0x0823F993
	.string "ザンネン!\nマチガイ デーーース!{EOS}"
	.if (. - gText_Rom_23F993) > 0x12
	.error "gText_Rom_23F993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F993) < 0x12
	.space 0x12 - (. - gText_Rom_23F993)
	.endif
