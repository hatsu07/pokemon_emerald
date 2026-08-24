	@ src/strings.c:149 gText_IDNumber2
	.globl gText_IDNumber2
gText_IDNumber2: @ 0x085C941A
	.string "{ID}{NO}{EOS}"
	.if (. - gText_IDNumber2) > 0x5
	.error "gText_IDNumber2 may not grow beyond its original slot"
	.endif
	.if (. - gText_IDNumber2) < 0x5
	.space 0x5 - (. - gText_IDNumber2)
	.endif
	.globl gText_Rom_5C941F

	@ asm/contest_painting.s:432 PrintContestPaintingCaption
	.globl gText_Rom_5C941F
gText_Rom_5C941F: @ 0x085C941F
	.string "　{EOS}"
	.if (. - gText_Rom_5C941F) > 0x2
	.error "gText_Rom_5C941F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C941F) < 0x2
	.space 0x2 - (. - gText_Rom_5C941F)
	.endif
	.globl gText_Rom_5C9421

	@ asm/dodrio_berry_picking.s:11319 sub_08029D28
	.globl gText_Rom_5C9421
gText_Rom_5C9421: @ 0x085C9421
	.string "▶{EOS}"
	.if (. - gText_Rom_5C9421) > 0x2
	.error "gText_Rom_5C9421 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9421) < 0x2
	.space 0x2 - (. - gText_Rom_5C9421)
	.endif
	.globl gText_Rom_5C9423

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5C9423
gText_Rom_5C9423: @ 0x085C9423
	.string "まえに　もどります！{EOS}"
	.if (. - gText_Rom_5C9423) > 0xb
	.error "gText_Rom_5C9423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9423) < 0xb
	.space 0xb - (. - gText_Rom_5C9423)
	.endif
	.globl gText_Rom_5C942E

	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_5C942E
gText_Rom_5C942E: @ 0x085C942E
	.string "なにを しますか?{EOS}"
	.if (. - gText_Rom_5C942E) > 0xa
	.error "gText_Rom_5C942E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C942E) < 0xa
	.space 0xa - (. - gText_Rom_5C942E)
	.endif
	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5C9438
gText_Rom_5C9438: @ 0x085C9438
	.string "あげる{EOS}"
	.if (. - gText_Rom_5C9438) > 0x4
	.error "gText_Rom_5C9438 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9438) < 0x4
	.space 0x4 - (. - gText_Rom_5C9438)
	.endif
	.globl gText_xVar1

	@ src/strings.c:155 gText_xVar1
	.globl gText_xVar1
gText_xVar1: @ 0x085C943C
	.string "×{STR_VAR_1}{EOS}"
	.if (. - gText_xVar1) > 0x4
	.error "gText_xVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_xVar1) < 0x4
	.space 0x4 - (. - gText_xVar1)
	.endif
	.globl gText_Rom_5C9440

	@ asm/item.s:165 CopyItemName
	.globl gText_Rom_5C9440
gText_Rom_5C9440: @ 0x085C9440
	.string "のみ{EOS}"
	.if (. - gText_Rom_5C9440) > 0x3
	.error "gText_Rom_5C9440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9440) < 0x3
	.space 0x3 - (. - gText_Rom_5C9440)
	.endif
	.globl gText_Coins

	@ src/strings.c:157 gText_Coins
	.globl gText_Coins
gText_Coins: @ 0x085C9443
	.string "{STR_VAR_1}まい{EOS}"
	.if (. - gText_Coins) > 0x5
	.error "gText_Coins may not grow beyond its original slot"
	.endif
	.if (. - gText_Coins) < 0x5
	.space 0x5 - (. - gText_Coins)
	.endif

	@ src/strings.c:158 gText_CloseBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_CloseBag
gText_CloseBag: @ 0x085C9448
	.string "バッグをとじる{EOS}"
	.if (. - gText_CloseBag) != 0x8
	.error "gText_CloseBag must retain its original byte length"
	.endif
	.globl gText_Rom_5C944C
	.set gText_Rom_5C944C, gText_CloseBag + 0x4

	@ src/strings.c:159 gText_Var1IsSelected
	.globl gText_Var1IsSelected
gText_Var1IsSelected: @ 0x085C9450
	.string "{STR_VAR_1}を\nどうしますか?{EOS}"
	.if (. - gText_Var1IsSelected) > 0xc
	.error "gText_Var1IsSelected may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1IsSelected) < 0xc
	.space 0xc - (. - gText_Var1IsSelected)
	.endif

	@ src/strings.c:160 gText_CantWriteMail
	.globl gText_CantWriteMail
gText_CantWriteMail: @ 0x085C945C
	.string "ここで メールを\nかくことは できません!{EOS}"
	.if (. - gText_CantWriteMail) > 0x16
	.error "gText_CantWriteMail may not grow beyond its original slot"
	.endif
	.if (. - gText_CantWriteMail) < 0x16
	.space 0x16 - (. - gText_CantWriteMail)
	.endif

	@ src/strings.c:161 gText_NoPokemon
	.globl gText_NoPokemon
gText_NoPokemon: @ 0x085C9472
	.string "ポケモンが いませんよ!{EOS}"
	.if (. - gText_NoPokemon) > 0xd
	.error "gText_NoPokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_NoPokemon) < 0xd
	.space 0xd - (. - gText_NoPokemon)
	.endif

	@ src/strings.c:162 gText_MoveVar1Where
	.globl gText_MoveVar1Where
gText_MoveVar1Where: @ 0x085C947F
	.string "{STR_VAR_1}を\nどこに いれますか?{EOS}"
	.if (. - gText_MoveVar1Where) > 0xf
	.error "gText_MoveVar1Where may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveVar1Where) < 0xf
	.space 0xf - (. - gText_MoveVar1Where)
	.endif

	@ src/strings.c:163 gText_Var1CantBeHeld
	.globl gText_Var1CantBeHeld
gText_Var1CantBeHeld: @ 0x085C948E
	.string "{STR_VAR_1}を\nもたせることは できません!{EOS}"
	.if (. - gText_Var1CantBeHeld) > 0x13
	.error "gText_Var1CantBeHeld may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1CantBeHeld) < 0x13
	.space 0x13 - (. - gText_Var1CantBeHeld)
	.endif
