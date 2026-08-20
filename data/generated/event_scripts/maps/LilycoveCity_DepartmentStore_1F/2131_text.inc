	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:141 LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore
	.globl gText_Rom_20A783
gText_Rom_20A783: @ 0x0820A783
	.string "いらっしゃいませ！\nミナモ デパート です{EOS}"
	.if (. - gText_Rom_20A783) > 0x16
	.error "gText_Rom_20A783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A783) < 0x16
	.space 0x16 - (. - gText_Rom_20A783)
	.endif
