	@ data/maps/FallarborTown/scripts.inc:57 FallarborTown_Text_RegionKnownForMeteors
	.globl gText_Rom_1E5F09
gText_Rom_1E5F09: @ 0x081E5F09
	.string "ここいら いったいは\nむかしから いんせきが おおくてな\pりゅうせいのたきも いんせきが おちて\nできたとか そう いわれておる{EOS}"
	.if (. - gText_Rom_1E5F09) > 0x41
	.error "gText_Rom_1E5F09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F09) < 0x41
	.space 0x41 - (. - gText_Rom_1E5F09)
	.endif
