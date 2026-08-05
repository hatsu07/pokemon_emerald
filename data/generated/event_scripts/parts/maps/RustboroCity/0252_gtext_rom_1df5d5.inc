	@ data/maps/RustboroCity/scripts.inc:1095 RustboroCity_Text_HelpMeIWasRobbed
	.globl gText_Rom_1DF5D5
gText_Rom_1DF5D5: @ 0x081DF5D5
	.string "ああ きみは!\pトウカのもりで たすけてくれた\nすてきな トレーナーじゃ ないですか!\pおねがいです!\pアクアだんに うばわれた\nデボンのにもつ とりかえして ください!\pあれが ないと……\nわたし とても こまるんです$"
	.if (. - gText_Rom_1DF5D5) > 0x6f
	.error "gText_Rom_1DF5D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF5D5) < 0x6f
	.space 0x6f - (. - gText_Rom_1DF5D5)
	.endif
