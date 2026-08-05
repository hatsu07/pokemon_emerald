	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:387 MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle
	.globl gText_Rom_20DCC6
gText_Rom_20DCC6: @ 0x0820DCC6
	.string "3にんがかりで まけると\nいつもの 3ばい かっこわるいぜ！$"
	.if (. - gText_Rom_20DCC6) > 0x1f
	.error "gText_Rom_20DCC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DCC6) < 0x1f
	.space 0x1f - (. - gText_Rom_20DCC6)
	.endif
