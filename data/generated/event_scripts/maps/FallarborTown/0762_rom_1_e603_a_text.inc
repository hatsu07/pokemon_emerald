	@ data/maps/FallarborTown/scripts.inc:54 FallarborTown_Text_ShadyCharactersCozmosHome
	.globl gText_Rom_1E5ED4
gText_Rom_1E5ED4: @ 0x081E5ED4
	.string "なんだ なんだ!?\pソライシはかせの いえに\nあやしげな じんぶつが\lではいり しておった ようだが……{EOS}"
	.if (. - gText_Rom_1E5ED4) > 0x35
	.error "gText_Rom_1E5ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5ED4) < 0x35
	.space 0x35 - (. - gText_Rom_1E5ED4)
	.endif
	@ data/maps/FallarborTown/scripts.inc:57 FallarborTown_Text_RegionKnownForMeteors
	.globl gText_Rom_1E5F09
gText_Rom_1E5F09: @ 0x081E5F09
	.string "ここいら いったいは\nむかしから いんせきが おおくてな\pりゅうせいのたきも いんせきが おちて\nできたとか そう いわれておる{EOS}"
	.if (. - gText_Rom_1E5F09) > 0x41
	.error "gText_Rom_1E5F09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F09) < 0x41
	.space 0x41 - (. - gText_Rom_1E5F09)
	.endif
	@ data/maps/FallarborTown/scripts.inc:60 FallarborTown_Text_MyPreciousAzurill
	.globl gText_Rom_1E5F4A
gText_Rom_1E5F4A: @ 0x081E5F4A
	.string "ほら! みてちょうだい!\nわたしの たいせつな ルリリ!\pツヤツヤの ナデナデの フカフカよ!{EOS}"
	.if (. - gText_Rom_1E5F4A) > 0x30
	.error "gText_Rom_1E5F4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F4A) < 0x30
	.space 0x30 - (. - gText_Rom_1E5F4A)
	.endif
	@ data/maps/FallarborTown/scripts.inc:63 FallarborTown_Text_Azurill
	.globl gText_Rom_1E5F7A
gText_Rom_1E5F7A: @ 0x081E5F7A
	.string "ルリリ『るーりーるー{EOS}"
	.if (. - gText_Rom_1E5F7A) > 0xb
	.error "gText_Rom_1E5F7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F7A) < 0xb
	.space 0xb - (. - gText_Rom_1E5F7A)
	.endif
	@ data/maps/FallarborTown/scripts.inc:66 FallarborTown_Text_HaveYouChallengedFlannery
	.globl gText_Rom_1E5F85
gText_Rom_1E5F85: @ 0x081E5F85
	.string "フエンタウンの ジムリーダー\nアスナとは たたかったかね?\pあのこの おじいさんは すごかったよ\nなんでも ポケモンリーグの\lしてんのう だった らしいからね\pきっと アスナも これから\nすばらしい トレーナーに なるだろうね{EOS}"
	.if (. - gText_Rom_1E5F85) > 0x72
	.error "gText_Rom_1E5F85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5F85) < 0x72
	.space 0x72 - (. - gText_Rom_1E5F85)
	.endif
	@ data/maps/FallarborTown/scripts.inc:69 FallarborTown_Text_BattleTentSign
	.globl gText_Rom_1E5FF7
gText_Rom_1E5FF7: @ 0x081E5FF7
	.string "バトルテント ハジツゲタウン かいじょう\nつどえ! さいきょう チーム{EOS}"
	.if (. - gText_Rom_1E5FF7) > 0x24
	.error "gText_Rom_1E5FF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5FF7) < 0x24
	.space 0x24 - (. - gText_Rom_1E5FF7)
	.endif
	@ data/maps/FallarborTown/scripts.inc:72 FallarborTown_Text_TownSign
	.globl gText_Rom_1E601B
gText_Rom_1E601B: @ 0x081E601B
	.string "ここは ハジツゲ タウン\nちいさな はたけが ある のうそん{EOS}"
	.if (. - gText_Rom_1E601B) > 0x1f
	.error "gText_Rom_1E601B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E601B) < 0x1f
	.space 0x1f - (. - gText_Rom_1E601B)
	.endif
	@ data/maps/FallarborTown/scripts.inc:75 FallarborTown_Text_MoveTutorSign
	.globl gText_Rom_1E603A
gText_Rom_1E603A: @ 0x081E603A
	.string "「わざおしえマニアの いえ」\nポケモンの わざ おしえます!{EOS}"
	.if (. - gText_Rom_1E603A) > 0x1f
	.error "gText_Rom_1E603A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E603A) < 0x1f
	.space 0x1f - (. - gText_Rom_1E603A)
	.endif
	@ Embedded ROM bytes: file offset 0x1E6059, size 0x97
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0x5F, 0x60, 0x1E, 0x08, 0x00, 0x29, 0x74, 0x08, 0x16, 0x86, 0x40, 0x00, 0x00, 0x02, 0x6A
	.byte 0x5A, 0x2B, 0xC7, 0x00, 0x06, 0x01, 0x87, 0x60, 0x1E, 0x08, 0x0F, 0x00
	.4byte gText_Rom_1E60F0 @ ROM pointer 0x081E60F0
	.byte 0x09, 0x04, 0x4F, 0x02, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_1E616F @ ROM pointer 0x081E616F
	.byte 0x09, 0x04, 0x4F, 0x02, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6C, 0x02, 0x0F, 0x00
	.4byte gText_Rom_1E619C @ ROM pointer 0x081E619C
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0xFD, 0x61, 0x1E, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x2B, 0xC7
	.byte 0x00, 0x06, 0x01, 0xC2, 0x60, 0x1E, 0x08, 0x0F, 0x00, 0x3D, 0x62, 0x1E, 0x08, 0x09, 0x04, 0x6C
	.byte 0x02, 0x0F, 0x00, 0xB6, 0x62, 0x1E, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x05, 0x63, 0x1E
	.byte 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00, 0x24, 0x63, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00, 0x2E
	.byte 0x63, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte gText_Rom_1E6350 @ ROM pointer 0x081E6350
	.byte 0x09, 0x03, 0x02
