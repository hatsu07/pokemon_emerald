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
