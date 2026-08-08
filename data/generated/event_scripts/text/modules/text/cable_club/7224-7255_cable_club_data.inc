
	@ data/text/cable_club.inc:148 CableClub_Text_YouMayBattleHere
	.globl gText_Rom_24802D
gText_Rom_24802D: @ 0x0824802D
	.string "ともだちと ポケモンの\nたいせんが たのしめます$"
	.if (. - gText_Rom_24802D) > 0x19
	.error "gText_Rom_24802D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24802D) < 0x19
	.space 0x19 - (. - gText_Rom_24802D)
	.endif

	@ data/text/cable_club.inc:151 CableClub_Text_CanMakeBerryPowder
	.globl gText_Rom_248046
gText_Rom_248046: @ 0x08248046
	.string "2にんから 5にんの ともだちと\nきのみで こなを つくります$"
	.if (. - gText_Rom_248046) > 0x20
	.error "gText_Rom_248046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248046) < 0x20
	.space 0x20 - (. - gText_Rom_248046)
	.endif

	@ data/text/cable_club.inc:154 CableClub_Text_CanMixRecords
	.globl gText_Rom_248066
gText_Rom_248066: @ 0x08248066
	.string "2にんから 4にんの ともだちと\nレコードを まぜます$"
	.if (. - gText_Rom_248066) > 0x1c
	.error "gText_Rom_248066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248066) < 0x1c
	.space 0x1c - (. - gText_Rom_248066)
	.endif

	@ data/text/cable_club.inc:158 CableClub_Text_GuideToVariousServices
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_248082
gText_Rom_248082: @ 0x08248082
	.string "ワイヤレス クラブでの\nあそびかたを せつめいします$"
	.if (. - gText_Rom_248082) != 0x1b
	.error "gText_Rom_248082 must retain its original byte length"
	.endif
	.globl gText_Rom_248099
	.set gText_Rom_248099, gText_Rom_248082 + 0x17

	@ data/text/cable_club.inc:161 CableClub_Text_CancelSelectedItem
	.globl gText_Rom_24809D
gText_Rom_24809D: @ 0x0824809D
	.string "やめます$"
	.if (. - gText_Rom_24809D) > 0x5
	.error "gText_Rom_24809D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24809D) < 0x5
	.space 0x5 - (. - gText_Rom_24809D)
	.endif

	@ data/text/cable_club.inc:169 CableClub_Text_ReturnsToPreviousStep
	.globl gText_Rom_2480A2
gText_Rom_2480A2: @ 0x082480A2
	.string "どちらの しょうぶに しますか?$"
	.if (. - gText_Rom_2480A2) > 0x11
	.error "gText_Rom_2480A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480A2) < 0x11
	.space 0x11 - (. - gText_Rom_2480A2)
	.endif

	@ data/text/cable_club.inc:172 CableClub_Text_NeedBerryForBerryCrush
	.globl gText_Rom_2480B3
gText_Rom_2480B3: @ 0x082480B3
	.string "ひとつ まえに もどります$"
	.if (. - gText_Rom_2480B3) > 0xe
	.error "gText_Rom_2480B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480B3) < 0xe
	.space 0xe - (. - gText_Rom_2480B3)
	.endif

	@ data/text/cable_club.inc:165 CableClub_Text_WhichBattleMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2480C1
gText_Rom_2480C1: @ 0x082480C1
	.string "きのみを もって いないと\nきのみクラッシュは できません$"
	.if (. - gText_Rom_2480C1) != 0x1e
	.error "gText_Rom_2480C1 must retain its original byte length"
	.endif
	.globl gText_Rom_2480DB
	.set gText_Rom_2480DB, gText_Rom_2480C1 + 0x1a

	@ data/text/cable_club.inc:175 CableClub_Text_NeedTwoMonsForUnionRoom
	.globl gText_Rom_2480DF
gText_Rom_2480DF: @ 0x082480DF
	.string "ユニオンルームに はいるには\n2ひき いじょうの ポケモンを\lもって おこしください$"
	.if (. - gText_Rom_2480DF) > 0x2b
	.error "gText_Rom_2480DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480DF) < 0x2b
	.space 0x2b - (. - gText_Rom_2480DF)
	.endif

	@ data/text/cable_club.inc:178 CableClub_Text_NoEnigmaBerryInUnionRoom
	.globl gText_Rom_24810A
gText_Rom_24810A: @ 0x0824810A
	.string "{STR_VAR_1}のみを もっている\nポケモンを おもちの かたは\lユニオンルームには はいれません…$"
	.if (. - gText_Rom_24810A) > 0x2d
	.error "gText_Rom_24810A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24810A) < 0x2d
	.space 0x2d - (. - gText_Rom_24810A)
	.endif

	@ data/text/cable_club.inc:181 CableClub_Text_UnionRoomAdapterNotConnected
	.globl gText_Rom_248137
gText_Rom_248137: @ 0x08248137
	.string "こちらは\nポケモン ワイヤレス クラブ\lユニオン ルームです\pワイヤレスアダプタが\nつながって いません\pまた おこしください$"
	.if (. - gText_Rom_248137) > 0x40
	.error "gText_Rom_248137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248137) < 0x40
	.space 0x40 - (. - gText_Rom_248137)
	.endif

	@ data/text/cable_club.inc:185 CableClub_Text_OhExcuseMe
	.globl gText_Rom_248177
gText_Rom_248177: @ 0x08248177
	.string "あ……\nおきゃくさま!$"
	.if (. - gText_Rom_248177) > 0xc
	.error "gText_Rom_248177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248177) < 0xc
	.space 0xc - (. - gText_Rom_248177)
	.endif

	@ data/text/cable_club.inc:188 CableClub_Text_PlayerIsWaiting
	.globl gText_Rom_248183
gText_Rom_248183: @ 0x08248183
	.string "あら! いま {STR_VAR_1}さんも\nプレイちゅう みたいですね\lがんばって くださいね!$"
	.if (. - gText_Rom_248183) > 0x28
	.error "gText_Rom_248183 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248183) < 0x28
	.space 0x28 - (. - gText_Rom_248183)
	.endif

	@ data/text/cable_club.inc:191 MossdeepCity_GameCorner_1F_Text_DescribeWhichGame
	.globl gText_Rom_2481AB
gText_Rom_2481AB: @ 0x082481AB
	.string "ぼくは ゲームの せつめいを\nしますよ!\lどの せつめいを ききますか?$"
	.if (. - gText_Rom_2481AB) > 0x25
	.error "gText_Rom_2481AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2481AB) < 0x25
	.space 0x25 - (. - gText_Rom_2481AB)
	.endif

	@ data/text/cable_club.inc:194 MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo
	.globl gText_Rom_2481D0
gText_Rom_2481D0: @ 0x082481D0
	.string "「ミニポケモンでジャンプ」は\nツルの なわを Aボタンで\lタイミングよく とぶ ゲームです\pさんか できる ポケモンは\nたかさ 70センチくらい までの\lちいさい ポケモンに なります\pもぐっていたり とんでいたり する\nポケモンは ジャンプが\lじょうずに できないので\lざんねんながら さんか できません\pみんなの ジャンプの タイミングが\nピッタリ あえば\lよいことが ありますよ!$"
	.if (. - gText_Rom_2481D0) > 0xc2
	.error "gText_Rom_2481D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2481D0) < 0xc2
	.space 0xc2 - (. - gText_Rom_2481D0)
	.endif
