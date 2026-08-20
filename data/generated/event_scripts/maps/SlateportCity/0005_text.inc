	@ data/maps/SlateportCity/scripts.inc:924 SlateportCity_Text_OhYourPokemon
	.globl gText_Rom_1DC9DA
gText_Rom_1DC9DA: @ 0x081DC9DA
	.string "あら?\nきみの {STR_VAR_1}……{EOS}"
	.if (. - gText_Rom_1DC9DA) > 0xd
	.error "gText_Rom_1DC9DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DC9DA) < 0xd
	.space 0xd - (. - gText_Rom_1DC9DA)
	.endif
