	@ data/text/blend_master.inc:83 BerryBlender_Text_MasterWorksOnSkillsInMountains
	.globl gText_Rom_2749E1
gText_Rom_2749E1: @ 0x082749E1
	.string "めいじんは どこかの やまおくで\nしゅぎょう しているらしいの\pそして ときどき\nミナモシティに やってきて\lきのみブレンダーを 1にちじゅう\lするらしいわ$"
	.if (. - gText_Rom_2749E1) > 0x4f
	.error "gText_Rom_2749E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2749E1) < 0x4f
	.space 0x4f - (. - gText_Rom_2749E1)
	.endif
