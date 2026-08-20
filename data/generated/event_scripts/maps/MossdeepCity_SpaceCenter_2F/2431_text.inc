	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:360 MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn
	.globl gText_Rom_20DBEC
gText_Rom_20DBEC: @ 0x0820DBEC
	.string "なんだ おまえ！\pおれたち 3にんに かこまれてるのに\nやろうってのか！?{EOS}"
	.if (. - gText_Rom_20DBEC) > 0x26
	.error "gText_Rom_20DBEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DBEC) < 0x26
	.space 0x26 - (. - gText_Rom_20DBEC)
	.endif
