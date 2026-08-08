
	@ src/data/easy_chat/easy_chat_group_feelings.h:49 gEasyChatWord_Terrible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768E7
gText_Rom_5768E7: @ 0x085768E7
	.string "つらかった$"
	.if (. - gText_Rom_5768E7) != 0x6
	.error "gText_Rom_5768E7 must retain its original byte length"
	.endif
	.globl gText_Rom_5768E9
	.set gText_Rom_5768E9, gText_Rom_5768E7 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:50 gEasyChatWord_Should (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768ED
gText_Rom_5768ED: @ 0x085768ED
	.string "どうしよう$"
	.if (. - gText_Rom_5768ED) != 0x6
	.error "gText_Rom_5768ED must retain its original byte length"
	.endif
	.globl gText_Rom_5768EF
	.set gText_Rom_5768EF, gText_Rom_5768ED + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:51 gEasyChatWord_Nice (+1 aliases)
	.globl gText_Rom_5768F3
gText_Rom_5768F3: @ 0x085768F3
	.string "ナイス$"
	.if (. - gText_Rom_5768F3) > 0x4
	.error "gText_Rom_5768F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768F3) < 0x4
	.space 0x4 - (. - gText_Rom_5768F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:52 gEasyChatWord_Drink (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768F7
gText_Rom_5768F7: @ 0x085768F7
	.string "のみたい$"
	.if (. - gText_Rom_5768F7) != 0x5
	.error "gText_Rom_5768F7 must retain its original byte length"
	.endif
	.globl gText_Rom_5768F8
	.set gText_Rom_5768F8, gText_Rom_5768F7 + 0x1

	@ src/data/easy_chat/easy_chat_group_feelings.h:53 gEasyChatWord_Surprise (+1 aliases)
	.globl gText_Rom_5768FC
gText_Rom_5768FC: @ 0x085768FC
	.string "びっくり$"
	.if (. - gText_Rom_5768FC) > 0x5
	.error "gText_Rom_5768FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768FC) < 0x5
	.space 0x5 - (. - gText_Rom_5768FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:54 gEasyChatWord_Fear (+1 aliases)
	.globl gText_Rom_576901
gText_Rom_576901: @ 0x08576901
	.string "ふあん$"
	.if (. - gText_Rom_576901) > 0x4
	.error "gText_Rom_576901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576901) < 0x4
	.space 0x4 - (. - gText_Rom_576901)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gText_Rom_576905
gText_Rom_576905: @ 0x08576905
	.string "ほしい$"
	.if (. - gText_Rom_576905) > 0x4
	.error "gText_Rom_576905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576905) < 0x4
	.space 0x4 - (. - gText_Rom_576905)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:56 gEasyChatWord_Wait (+1 aliases)
	.globl gText_Rom_576909
gText_Rom_576909: @ 0x08576909
	.string "まてない$"
	.if (. - gText_Rom_576909) > 0x5
	.error "gText_Rom_576909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576909) < 0x5
	.space 0x5 - (. - gText_Rom_576909)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gText_Rom_57690E
gText_Rom_57690E: @ 0x0857690E
	.string "まんぞく$"
	.if (. - gText_Rom_57690E) > 0x5
	.error "gText_Rom_57690E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57690E) < 0x5
	.space 0x5 - (. - gText_Rom_57690E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:58 gEasyChatWord_See (+1 aliases)
	.globl gText_Rom_576913
gText_Rom_576913: @ 0x08576913
	.string "みたい$"
	.if (. - gText_Rom_576913) > 0x4
	.error "gText_Rom_576913 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576913) < 0x4
	.space 0x4 - (. - gText_Rom_576913)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576917
gText_Rom_576917: @ 0x08576917
	.string "めずらしい$"
	.if (. - gText_Rom_576917) != 0x6
	.error "gText_Rom_576917 must retain its original byte length"
	.endif
	.globl gText_Rom_576919
	.set gText_Rom_576919, gText_Rom_576917 + 0x2
	@ Decoded text from ROM range: offset=0x57691D, size=0x3
	.string "やだ$"

	@ src/data/easy_chat/easy_chat_group_feelings.h:61 gEasyChatWord_Done (+1 aliases)
	.globl gText_Rom_576920
gText_Rom_576920: @ 0x08576920
	.string "やったー$"
	.if (. - gText_Rom_576920) > 0x5
	.error "gText_Rom_576920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576920) < 0x5
	.space 0x5 - (. - gText_Rom_576920)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:62 gEasyChatWord_Danger (+1 aliases)
	.globl gText_Rom_576925
gText_Rom_576925: @ 0x08576925
	.string "やばい$"
	.if (. - gText_Rom_576925) > 0x4
	.error "gText_Rom_576925 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576925) < 0x4
	.space 0x4 - (. - gText_Rom_576925)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:63 gEasyChatWord_Defeated (+1 aliases)
	.globl gText_Rom_576929
gText_Rom_576929: @ 0x08576929
	.string "やられた$"
	.if (. - gText_Rom_576929) > 0x5
	.error "gText_Rom_576929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576929) < 0x5
	.space 0x5 - (. - gText_Rom_576929)
	.endif
