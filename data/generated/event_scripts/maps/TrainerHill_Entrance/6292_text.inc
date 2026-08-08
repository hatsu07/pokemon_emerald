	@ data/maps/TrainerHill_Entrance/scripts.inc:342 TrainerHill_Roof_Text_FullUpBeBackLaterForThis
	.globl gText_Rom_23BDCF
gText_Rom_23BDCF: @ 0x0823BDCF
	.string "もちものが いっぱいだねー\nあとで とりにきてー!"
	.byte EOS
	.if (. - gText_Rom_23BDCF) > 0x1a
	.error "gText_Rom_23BDCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BDCF) < 0x1a
	.space 0x1a - (. - gText_Rom_23BDCF)
	.endif
