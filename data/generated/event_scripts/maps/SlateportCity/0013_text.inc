	@ data/maps/SlateportCity/scripts.inc:940 SlateportCity_Text_GoForItLittleHarder
	.globl gText_Rom_1DCA3D
gText_Rom_1DCA3D: @ 0x081DCA3D
	.string "もっと がんばってみて!\pがんばれば わたしが ポケモンに\nいいもの あげるから!{EOS}"
	.if (. - gText_Rom_1DCA3D) > 0x2a
	.error "gText_Rom_1DCA3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA3D) < 0x2a
	.space 0x2a - (. - gText_Rom_1DCA3D)
	.endif
