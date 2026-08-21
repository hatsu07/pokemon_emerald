	@ src/data/easy_chat/easy_chat_group_battle.h:4 easy_chat_group_battle_line_4
	.globl gText_Rom_575050
gText_Rom_575050: @ 0x08575050
	.string "あいしょう{EOS}"
	.if (. - gText_Rom_575050) > 0x6
	.error "gText_Rom_575050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575050) < 0x6
	.space 0x6 - (. - gText_Rom_575050)
	.endif
	@ Decoded text from ROM range: offset=0x575056, size=0x3
	.string "いけ{EOS}"

	@ src/data/easy_chat/easy_chat_group_battle.h:16 easy_chat_group_battle_line_16
	.globl gText_Rom_575059
gText_Rom_575059: @ 0x08575059
	.string "いちばん{EOS}"
	.if (. - gText_Rom_575059) > 0x5
	.error "gText_Rom_575059 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575059) < 0x5
	.space 0x5 - (. - gText_Rom_575059)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:22 easy_chat_group_battle_line_22
	.globl gText_Rom_57505E
gText_Rom_57505E: @ 0x0857505E
	.string "かくご{EOS}"
	.if (. - gText_Rom_57505E) > 0x4
	.error "gText_Rom_57505E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57505E) < 0x4
	.space 0x4 - (. - gText_Rom_57505E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:28 easy_chat_group_battle_line_28
	.globl gText_Rom_575062
gText_Rom_575062: @ 0x08575062
	.string "かたせて{EOS}"
	.if (. - gText_Rom_575062) > 0x5
	.error "gText_Rom_575062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575062) < 0x5
	.space 0x5 - (. - gText_Rom_575062)
	.endif
	@ Decoded text from ROM range: offset=0x575067, size=0x6
	.string "かち{EOS}"
	.string "かつ{EOS}"

	@ src/data/easy_chat/easy_chat_group_battle.h:46 easy_chat_group_battle_line_46
	.globl gText_Rom_57506D
gText_Rom_57506D: @ 0x0857506D
	.string "かった{EOS}"
	.if (. - gText_Rom_57506D) > 0x4
	.error "gText_Rom_57506D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57506D) < 0x4
	.space 0x4 - (. - gText_Rom_57506D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:52 easy_chat_group_battle_line_52
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575071
gText_Rom_575071: @ 0x08575071
	.string "かったら{EOS}"
	.if (. - gText_Rom_575071) != 0x5
	.error "gText_Rom_575071 must retain its original byte length"
	.endif
	.globl gText_Rom_575072
	.set gText_Rom_575072, gText_Rom_575071 + 0x1

	@ src/data/easy_chat/easy_chat_group_battle.h:58 easy_chat_group_battle_line_58
	.globl gText_Rom_575076
gText_Rom_575076: @ 0x08575076
	.string "かって{EOS}"
	.if (. - gText_Rom_575076) > 0x4
	.error "gText_Rom_575076 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575076) < 0x4
	.space 0x4 - (. - gText_Rom_575076)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:64 easy_chat_group_battle_line_64
	.globl gText_Rom_57507A
gText_Rom_57507A: @ 0x0857507A
	.string "かてない{EOS}"
	.if (. - gText_Rom_57507A) > 0x5
	.error "gText_Rom_57507A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507A) < 0x5
	.space 0x5 - (. - gText_Rom_57507A)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:70 easy_chat_group_battle_line_70
	.globl gText_Rom_57507F
gText_Rom_57507F: @ 0x0857507F
	.string "かてる{EOS}"
	.if (. - gText_Rom_57507F) > 0x4
	.error "gText_Rom_57507F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507F) < 0x4
	.space 0x4 - (. - gText_Rom_57507F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:76 easy_chat_group_battle_line_76
	.globl gText_Rom_575083
gText_Rom_575083: @ 0x08575083
	.string "かなわない{EOS}"
	.if (. - gText_Rom_575083) > 0x6
	.error "gText_Rom_575083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575083) < 0x6
	.space 0x6 - (. - gText_Rom_575083)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_575089
gText_Rom_575089: @ 0x08575089
	.string "きあい{EOS}"
	.if (. - gText_Rom_575089) > 0x4
	.error "gText_Rom_575089 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575089) < 0x4
	.space 0x4 - (. - gText_Rom_575089)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:88 easy_chat_group_battle_line_88
	.globl gText_Rom_57508D
gText_Rom_57508D: @ 0x0857508D
	.string "きめた{EOS}"
	.if (. - gText_Rom_57508D) > 0x4
	.error "gText_Rom_57508D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57508D) < 0x4
	.space 0x4 - (. - gText_Rom_57508D)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:94 easy_chat_group_battle_line_94 (+1 aliases)
	.globl gText_Rom_575091
gText_Rom_575091: @ 0x08575091
	.string "きりふだ{EOS}"
	.if (. - gText_Rom_575091) > 0x5
	.error "gText_Rom_575091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575091) < 0x5
	.space 0x5 - (. - gText_Rom_575091)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:100 easy_chat_group_battle_line_100
	.globl gText_Rom_575096
gText_Rom_575096: @ 0x08575096
	.string "くらえ{EOS}"
	.if (. - gText_Rom_575096) > 0x4
	.error "gText_Rom_575096 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575096) < 0x4
	.space 0x4 - (. - gText_Rom_575096)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:106 easy_chat_group_battle_line_106
	.globl gText_Rom_57509A
gText_Rom_57509A: @ 0x0857509A
	.string "こい!{EOS}"
	.if (. - gText_Rom_57509A) > 0x4
	.error "gText_Rom_57509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509A) < 0x4
	.space 0x4 - (. - gText_Rom_57509A)
	.endif
