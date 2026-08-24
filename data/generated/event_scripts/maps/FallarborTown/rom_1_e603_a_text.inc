	@ data/maps/FallarborTown/scripts.inc:54 FallarborTown_Text_ShadyCharactersCozmosHome
	.globl FallarborTown_Text_ShadyCharactersCozmosHome
FallarborTown_Text_ShadyCharactersCozmosHome: @ 0x081E5ED4
	.string "なんだ なんだ!?\pソライシはかせの いえに\nあやしげな じんぶつが\lではいり しておった ようだが……{EOS}"
	.if (. - FallarborTown_Text_ShadyCharactersCozmosHome) > 0x35
	.error "FallarborTown_Text_ShadyCharactersCozmosHome may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_ShadyCharactersCozmosHome) < 0x35
	.space 0x35 - (. - FallarborTown_Text_ShadyCharactersCozmosHome)
	.endif
	@ data/maps/FallarborTown/scripts.inc:57 FallarborTown_Text_RegionKnownForMeteors
	.globl FallarborTown_Text_RegionKnownForMeteors
FallarborTown_Text_RegionKnownForMeteors: @ 0x081E5F09
	.string "ここいら いったいは\nむかしから いんせきが おおくてな\pりゅうせいのたきも いんせきが おちて\nできたとか そう いわれておる{EOS}"
	.if (. - FallarborTown_Text_RegionKnownForMeteors) > 0x41
	.error "FallarborTown_Text_RegionKnownForMeteors may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_RegionKnownForMeteors) < 0x41
	.space 0x41 - (. - FallarborTown_Text_RegionKnownForMeteors)
	.endif
	@ data/maps/FallarborTown/scripts.inc:60 FallarborTown_Text_MyPreciousAzurill
	.globl FallarborTown_Text_MyPreciousAzurill
FallarborTown_Text_MyPreciousAzurill: @ 0x081E5F4A
	.string "ほら! みてちょうだい!\nわたしの たいせつな ルリリ!\pツヤツヤの ナデナデの フカフカよ!{EOS}"
	.if (. - FallarborTown_Text_MyPreciousAzurill) > 0x30
	.error "FallarborTown_Text_MyPreciousAzurill may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_MyPreciousAzurill) < 0x30
	.space 0x30 - (. - FallarborTown_Text_MyPreciousAzurill)
	.endif
	@ data/maps/FallarborTown/scripts.inc:63 FallarborTown_Text_Azurill
	.globl FallarborTown_Text_Azurill
FallarborTown_Text_Azurill: @ 0x081E5F7A
	.string "ルリリ『るーりーるー{EOS}"
	.if (. - FallarborTown_Text_Azurill) > 0xb
	.error "FallarborTown_Text_Azurill may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_Azurill) < 0xb
	.space 0xb - (. - FallarborTown_Text_Azurill)
	.endif
	@ data/maps/FallarborTown/scripts.inc:66 FallarborTown_Text_HaveYouChallengedFlannery
	.globl FallarborTown_Text_HaveYouChallengedFlannery
FallarborTown_Text_HaveYouChallengedFlannery: @ 0x081E5F85
	.string "フエンタウンの ジムリーダー\nアスナとは たたかったかね?\pあのこの おじいさんは すごかったよ\nなんでも ポケモンリーグの\lしてんのう だった らしいからね\pきっと アスナも これから\nすばらしい トレーナーに なるだろうね{EOS}"
	.if (. - FallarborTown_Text_HaveYouChallengedFlannery) > 0x72
	.error "FallarborTown_Text_HaveYouChallengedFlannery may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_HaveYouChallengedFlannery) < 0x72
	.space 0x72 - (. - FallarborTown_Text_HaveYouChallengedFlannery)
	.endif
	@ data/maps/FallarborTown/scripts.inc:69 FallarborTown_Text_BattleTentSign
	.globl FallarborTown_Text_BattleTentSign
FallarborTown_Text_BattleTentSign: @ 0x081E5FF7
	.string "バトルテント ハジツゲタウン かいじょう\nつどえ! さいきょう チーム{EOS}"
	.if (. - FallarborTown_Text_BattleTentSign) > 0x24
	.error "FallarborTown_Text_BattleTentSign may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_BattleTentSign) < 0x24
	.space 0x24 - (. - FallarborTown_Text_BattleTentSign)
	.endif
	@ data/maps/FallarborTown/scripts.inc:72 FallarborTown_Text_TownSign
	.globl FallarborTown_Text_TownSign
FallarborTown_Text_TownSign: @ 0x081E601B
	.string "ここは ハジツゲ タウン\nちいさな はたけが ある のうそん{EOS}"
	.if (. - FallarborTown_Text_TownSign) > 0x1f
	.error "FallarborTown_Text_TownSign may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_TownSign) < 0x1f
	.space 0x1f - (. - FallarborTown_Text_TownSign)
	.endif
	@ data/maps/FallarborTown/scripts.inc:75 FallarborTown_Text_MoveTutorSign
	.globl FallarborTown_Text_MoveTutorSign
FallarborTown_Text_MoveTutorSign: @ 0x081E603A
	.string "「わざおしえマニアの いえ」\nポケモンの わざ おしえます!{EOS}"
	.if (. - FallarborTown_Text_MoveTutorSign) > 0x1f
	.error "FallarborTown_Text_MoveTutorSign may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_Text_MoveTutorSign) < 0x1f
	.space 0x1f - (. - FallarborTown_Text_MoveTutorSign)
	.endif
	@ Embedded ROM bytes: file offset 0x1E6059, size 0x97
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0x5F, 0x60, 0x1E, 0x08, 0x00, 0x29, 0x74, 0x08, 0x16, 0x86, 0x40, 0x00, 0x00, 0x02, 0x6A
	.byte 0x5A, 0x2B, 0xC7, 0x00, 0x06, 0x01, 0x87, 0x60, 0x1E, 0x08, 0x0F, 0x00
	.4byte VerdanturfTown_Text_ManTryingToDigTunnel @ ROM pointer 0x081E60F0
	.byte 0x09, 0x04, 0x4F, 0x02, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6C, 0x02, 0x0F, 0x00
	.4byte VerdanturfTown_Text_ManDugTunnelForLove @ ROM pointer 0x081E616F
	.byte 0x09, 0x04, 0x4F, 0x02, 0x00, 0x25, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6C, 0x02, 0x0F, 0x00
	.4byte VerdanturfTown_Text_AirCleanHere @ ROM pointer 0x081E619C
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte VerdanturfTown_Text_MakeBattleTentDebut
	.byte 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x2B, 0xC7
	.byte 0x00, 0x06, 0x01, 0xC2, 0x60, 0x1E, 0x08, 0x0F, 0x00
	.4byte VerdanturfTown_Text_GuyTryingToBustThroughCave
	.byte 0x09, 0x04, 0x6C
	.byte 0x02, 0x0F, 0x00, 0xB6, 0x62, 0x1E, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte VerdanturfTown_Text_TownSign
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte VerdanturfTown_Text_WandasHouse
	.byte 0x09, 0x03, 0x02, 0x0F, 0x00, 0x2E
	.byte 0x63, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte gText_Rom_1E6350 @ ROM pointer 0x081E6350
	.byte 0x09, 0x03, 0x02
