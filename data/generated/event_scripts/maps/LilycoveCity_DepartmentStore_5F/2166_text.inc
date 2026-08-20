	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:145 LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls
	.globl gText_Rom_20AD99
gText_Rom_20AD99: @ 0x0820AD99
	.string "すてきな ぬいぐるみが いっぱい なのねー\nこどものぶん だけじゃ なくて\lあたしのぶんも かおうかしら オホホホホ!{EOS}"
	.if (. - gText_Rom_20AD99) > 0x3c
	.error "gText_Rom_20AD99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20AD99) < 0x3c
	.space 0x3c - (. - gText_Rom_20AD99)
	.endif
