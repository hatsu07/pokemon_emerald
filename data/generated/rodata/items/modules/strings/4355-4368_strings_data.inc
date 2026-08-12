	@ src/strings.c:157 gText_Coins
	.globl gText_Rom_5C9443
gText_Rom_5C9443: @ 0x085C9443
	.string "{STR_VAR_1}まい$"
	.if (. - gText_Rom_5C9443) > 0x5
	.error "gText_Rom_5C9443 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9443) < 0x5
	.space 0x5 - (. - gText_Rom_5C9443)
	.endif

	@ src/strings.c:158 gText_CloseBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9448
gText_Rom_5C9448: @ 0x085C9448
	.string "バッグをとじる$"
	.if (. - gText_Rom_5C9448) != 0x8
	.error "gText_Rom_5C9448 must retain its original byte length"
	.endif
	.globl gText_Rom_5C944C
	.set gText_Rom_5C944C, gText_Rom_5C9448 + 0x4

	@ src/strings.c:159 gText_Var1IsSelected
	.globl gText_Rom_5C9450
gText_Rom_5C9450: @ 0x085C9450
	.string "{STR_VAR_1}を\nどうしますか?$"
	.if (. - gText_Rom_5C9450) > 0xc
	.error "gText_Rom_5C9450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9450) < 0xc
	.space 0xc - (. - gText_Rom_5C9450)
	.endif

	@ src/strings.c:160 gText_CantWriteMail
	.globl gText_Rom_5C945C
gText_Rom_5C945C: @ 0x085C945C
	.string "ここで メールを\nかくことは できません!$"
	.if (. - gText_Rom_5C945C) > 0x16
	.error "gText_Rom_5C945C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C945C) < 0x16
	.space 0x16 - (. - gText_Rom_5C945C)
	.endif

	@ src/strings.c:161 gText_NoPokemon
	.globl gText_Rom_5C9472
gText_Rom_5C9472: @ 0x085C9472
	.string "ポケモンが いませんよ!$"
	.if (. - gText_Rom_5C9472) > 0xd
	.error "gText_Rom_5C9472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9472) < 0xd
	.space 0xd - (. - gText_Rom_5C9472)
	.endif

	@ src/strings.c:162 gText_MoveVar1Where
	.globl gText_Rom_5C947F
gText_Rom_5C947F: @ 0x085C947F
	.string "{STR_VAR_1}を\nどこに いれますか?$"
	.if (. - gText_Rom_5C947F) > 0xf
	.error "gText_Rom_5C947F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C947F) < 0xf
	.space 0xf - (. - gText_Rom_5C947F)
	.endif

	@ src/strings.c:163 gText_Var1CantBeHeld
	.globl gText_Rom_5C948E
gText_Rom_5C948E: @ 0x085C948E
	.string "{STR_VAR_1}を\nもたせることは できません!$"
	.if (. - gText_Rom_5C948E) > 0x13
	.error "gText_Rom_5C948E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C948E) < 0x13
	.space 0x13 - (. - gText_Rom_5C948E)
	.endif
