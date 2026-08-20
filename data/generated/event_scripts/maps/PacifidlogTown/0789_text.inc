	@ data/maps/PacifidlogTown/scripts.inc:36 PacifidlogTown_Text_SkyPillarTooScary
	.globl gText_Rom_1E6429
gText_Rom_1E6429: @ 0x081E6429
	.string "そらのはしら?\p……ああ このさきに たっている\nたかーーい とうの ことだね\pあんな たかい ところ\nおっかなくて のぼれないなー\pぼくは やっぱり キナギでの\nすいめん スレスレな せいかつが\lはだに あうんだよねえー{EOS}"
	.if (. - gText_Rom_1E6429) > 0x70
	.error "gText_Rom_1E6429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6429) < 0x70
	.space 0x70 - (. - gText_Rom_1E6429)
	.endif
