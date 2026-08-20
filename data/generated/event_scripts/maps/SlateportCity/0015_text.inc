	@ data/maps/SlateportCity/scripts.inc:945 SlateportCity_Text_EffortRibbonLooksGoodOnIt
	.globl gText_Rom_1DCA67
gText_Rom_1DCA67: @ 0x081DCA67
	.string "あっ! きみの {STR_VAR_1}\nがんばリボン にあってるよ!{EOS}"
	.if (. - gText_Rom_1DCA67) > 0x1a
	.error "gText_Rom_1DCA67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA67) < 0x1a
	.space 0x1a - (. - gText_Rom_1DCA67)
	.endif
