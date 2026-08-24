
	@ src/data/easy_chat/easy_chat_group_feelings.h:49 gEasyChatWord_Terrible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Terrible
gEasyChatWord_Terrible: @ 0x085768E7
	.string "つらかった{EOS}"
	.if (. - gEasyChatWord_Terrible) != 0x6
	.error "gEasyChatWord_Terrible must retain its original byte length"
	.endif
	.globl gText_Rom_5768E9
	.set gText_Rom_5768E9, gEasyChatWord_Terrible + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:50 gEasyChatWord_Should (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Should
gEasyChatWord_Should: @ 0x085768ED
	.string "どうしよう{EOS}"
	.if (. - gEasyChatWord_Should) != 0x6
	.error "gEasyChatWord_Should must retain its original byte length"
	.endif
	.globl gText_Rom_5768EF
	.set gText_Rom_5768EF, gEasyChatWord_Should + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:51 gEasyChatWord_Nice (+1 aliases)
	.globl gEasyChatWord_Nice
gEasyChatWord_Nice: @ 0x085768F3
	.string "ナイス{EOS}"
	.if (. - gEasyChatWord_Nice) > 0x4
	.error "gEasyChatWord_Nice may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Nice) < 0x4
	.space 0x4 - (. - gEasyChatWord_Nice)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:52 gEasyChatWord_Drink (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Drink
gEasyChatWord_Drink: @ 0x085768F7
	.string "のみたい{EOS}"
	.if (. - gEasyChatWord_Drink) != 0x5
	.error "gEasyChatWord_Drink must retain its original byte length"
	.endif
	.globl gText_Rom_5768F8
	.set gText_Rom_5768F8, gEasyChatWord_Drink + 0x1

	@ src/data/easy_chat/easy_chat_group_feelings.h:53 gEasyChatWord_Surprise (+1 aliases)
	.globl gEasyChatWord_Surprise
gEasyChatWord_Surprise: @ 0x085768FC
	.string "びっくり{EOS}"
	.if (. - gEasyChatWord_Surprise) > 0x5
	.error "gEasyChatWord_Surprise may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Surprise) < 0x5
	.space 0x5 - (. - gEasyChatWord_Surprise)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:54 gEasyChatWord_Fear (+1 aliases)
	.globl gEasyChatWord_Fear
gEasyChatWord_Fear: @ 0x08576901
	.string "ふあん{EOS}"
	.if (. - gEasyChatWord_Fear) > 0x4
	.error "gEasyChatWord_Fear may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Fear) < 0x4
	.space 0x4 - (. - gEasyChatWord_Fear)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gText_Rom_576905
gText_Rom_576905: @ 0x08576905
	.string "ほしい{EOS}"
	.if (. - gText_Rom_576905) > 0x4
	.error "gText_Rom_576905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576905) < 0x4
	.space 0x4 - (. - gText_Rom_576905)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:56 gEasyChatWord_Wait (+1 aliases)
	.globl gEasyChatWord_Wait
gEasyChatWord_Wait: @ 0x08576909
	.string "まてない{EOS}"
	.if (. - gEasyChatWord_Wait) > 0x5
	.error "gEasyChatWord_Wait may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Wait) < 0x5
	.space 0x5 - (. - gEasyChatWord_Wait)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gEasyChatWord_Satisfied
gEasyChatWord_Satisfied: @ 0x0857690E
	.string "まんぞく{EOS}"
	.if (. - gEasyChatWord_Satisfied) > 0x5
	.error "gEasyChatWord_Satisfied may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Satisfied) < 0x5
	.space 0x5 - (. - gEasyChatWord_Satisfied)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:58 gEasyChatWord_See (+1 aliases)
	.globl gEasyChatWord_See
gEasyChatWord_See: @ 0x08576913
	.string "みたい{EOS}"
	.if (. - gEasyChatWord_See) > 0x4
	.error "gEasyChatWord_See may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_See) < 0x4
	.space 0x4 - (. - gEasyChatWord_See)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Rare
gEasyChatWord_Rare: @ 0x08576917
	.string "めずらしい{EOS}"
	.if (. - gEasyChatWord_Rare) != 0x6
	.error "gEasyChatWord_Rare must retain its original byte length"
	.endif
	.globl gText_Rom_576919
	.set gText_Rom_576919, gEasyChatWord_Rare + 0x2
	@ Decoded text from ROM range: offset=0x57691D, size=0x3
	.string "やだ{EOS}"

	@ src/data/easy_chat/easy_chat_group_feelings.h:61 gEasyChatWord_Done (+1 aliases)
	.globl gEasyChatWord_Done
gEasyChatWord_Done: @ 0x08576920
	.string "やったー{EOS}"
	.if (. - gEasyChatWord_Done) > 0x5
	.error "gEasyChatWord_Done may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Done) < 0x5
	.space 0x5 - (. - gEasyChatWord_Done)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:62 gEasyChatWord_Danger (+1 aliases)
	.globl gEasyChatWord_Danger
gEasyChatWord_Danger: @ 0x08576925
	.string "やばい{EOS}"
	.if (. - gEasyChatWord_Danger) > 0x4
	.error "gEasyChatWord_Danger may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Danger) < 0x4
	.space 0x4 - (. - gEasyChatWord_Danger)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:63 gEasyChatWord_Defeated (+1 aliases)
	.globl gEasyChatWord_Defeated
gEasyChatWord_Defeated: @ 0x08576929
	.string "やられた{EOS}"
	.if (. - gEasyChatWord_Defeated) > 0x5
	.error "gEasyChatWord_Defeated may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Defeated) < 0x5
	.space 0x5 - (. - gEasyChatWord_Defeated)
	.endif
