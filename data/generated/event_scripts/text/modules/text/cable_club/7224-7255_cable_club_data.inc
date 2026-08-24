
	@ data/text/cable_club.inc:148 CableClub_Text_YouMayBattleHere
	.globl CableClub_Text_YouMayBattleHere
CableClub_Text_YouMayBattleHere: @ 0x0824802D
	.string "ともだちと ポケモンの\nたいせんが たのしめます{EOS}"
	.if (. - CableClub_Text_YouMayBattleHere) > 0x19
	.error "CableClub_Text_YouMayBattleHere may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_YouMayBattleHere) < 0x19
	.space 0x19 - (. - CableClub_Text_YouMayBattleHere)
	.endif

	@ data/text/cable_club.inc:151 CableClub_Text_CanMakeBerryPowder
	.globl CableClub_Text_CanMakeBerryPowder
CableClub_Text_CanMakeBerryPowder: @ 0x08248046
	.string "2にんから 5にんの ともだちと\nきのみで こなを つくります{EOS}"
	.if (. - CableClub_Text_CanMakeBerryPowder) > 0x20
	.error "CableClub_Text_CanMakeBerryPowder may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_CanMakeBerryPowder) < 0x20
	.space 0x20 - (. - CableClub_Text_CanMakeBerryPowder)
	.endif

	@ data/text/cable_club.inc:154 CableClub_Text_CanMixRecords
	.globl CableClub_Text_CanMixRecords
CableClub_Text_CanMixRecords: @ 0x08248066
	.string "2にんから 4にんの ともだちと\nレコードを まぜます{EOS}"
	.if (. - CableClub_Text_CanMixRecords) > 0x1c
	.error "CableClub_Text_CanMixRecords may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_CanMixRecords) < 0x1c
	.space 0x1c - (. - CableClub_Text_CanMixRecords)
	.endif

	@ data/text/cable_club.inc:158 CableClub_Text_GuideToVariousServices
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl CableClub_Text_GuideToVariousServices
CableClub_Text_GuideToVariousServices: @ 0x08248082
	.string "ワイヤレス クラブでの\nあそびかたを せつめいします{EOS}"
	.if (. - CableClub_Text_GuideToVariousServices) != 0x1b
	.error "CableClub_Text_GuideToVariousServices must retain its original byte length"
	.endif
	.globl gText_Rom_248099
	.set gText_Rom_248099, CableClub_Text_GuideToVariousServices + 0x17

	@ data/text/cable_club.inc:161 CableClub_Text_CancelSelectedItem
	.globl CableClub_Text_CancelSelectedItem
CableClub_Text_CancelSelectedItem: @ 0x0824809D
	.string "やめます{EOS}"
	.if (. - CableClub_Text_CancelSelectedItem) > 0x5
	.error "CableClub_Text_CancelSelectedItem may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_CancelSelectedItem) < 0x5
	.space 0x5 - (. - CableClub_Text_CancelSelectedItem)
	.endif

	@ data/text/cable_club.inc:169 CableClub_Text_ReturnsToPreviousStep
	.globl CableClub_Text_ReturnsToPreviousStep
CableClub_Text_ReturnsToPreviousStep: @ 0x082480A2
	.string "どちらの しょうぶに しますか?{EOS}"
	.if (. - CableClub_Text_ReturnsToPreviousStep) > 0x11
	.error "CableClub_Text_ReturnsToPreviousStep may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_ReturnsToPreviousStep) < 0x11
	.space 0x11 - (. - CableClub_Text_ReturnsToPreviousStep)
	.endif

	@ data/text/cable_club.inc:172 CableClub_Text_NeedBerryForBerryCrush
	.globl CableClub_Text_NeedBerryForBerryCrush
CableClub_Text_NeedBerryForBerryCrush: @ 0x082480B3
	.string "ひとつ まえに もどります{EOS}"
	.if (. - CableClub_Text_NeedBerryForBerryCrush) > 0xe
	.error "CableClub_Text_NeedBerryForBerryCrush may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_NeedBerryForBerryCrush) < 0xe
	.space 0xe - (. - CableClub_Text_NeedBerryForBerryCrush)
	.endif

	@ data/text/cable_club.inc:165 CableClub_Text_WhichBattleMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl CableClub_Text_WhichBattleMode
CableClub_Text_WhichBattleMode: @ 0x082480C1
	.string "きのみを もって いないと\nきのみクラッシュは できません{EOS}"
	.if (. - CableClub_Text_WhichBattleMode) != 0x1e
	.error "CableClub_Text_WhichBattleMode must retain its original byte length"
	.endif
	.globl gText_Rom_2480DB
	.set gText_Rom_2480DB, CableClub_Text_WhichBattleMode + 0x1a

	@ data/text/cable_club.inc:175 CableClub_Text_NeedTwoMonsForUnionRoom
	.globl CableClub_Text_NeedTwoMonsForUnionRoom
CableClub_Text_NeedTwoMonsForUnionRoom: @ 0x082480DF
	.string "ユニオンルームに はいるには\n2ひき いじょうの ポケモンを\lもって おこしください{EOS}"
	.if (. - CableClub_Text_NeedTwoMonsForUnionRoom) > 0x2b
	.error "CableClub_Text_NeedTwoMonsForUnionRoom may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_NeedTwoMonsForUnionRoom) < 0x2b
	.space 0x2b - (. - CableClub_Text_NeedTwoMonsForUnionRoom)
	.endif

	@ data/text/cable_club.inc:178 CableClub_Text_NoEnigmaBerryInUnionRoom
	.globl CableClub_Text_NoEnigmaBerryInUnionRoom
CableClub_Text_NoEnigmaBerryInUnionRoom: @ 0x0824810A
	.string "{STR_VAR_1}のみを もっている\nポケモンを おもちの かたは\lユニオンルームには はいれません…{EOS}"
	.if (. - CableClub_Text_NoEnigmaBerryInUnionRoom) > 0x2d
	.error "CableClub_Text_NoEnigmaBerryInUnionRoom may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_NoEnigmaBerryInUnionRoom) < 0x2d
	.space 0x2d - (. - CableClub_Text_NoEnigmaBerryInUnionRoom)
	.endif

	@ data/text/cable_club.inc:181 CableClub_Text_UnionRoomAdapterNotConnected
	.globl CableClub_Text_UnionRoomAdapterNotConnected
CableClub_Text_UnionRoomAdapterNotConnected: @ 0x08248137
	.string "こちらは\nポケモン ワイヤレス クラブ\lユニオン ルームです\pワイヤレスアダプタが\nつながって いません\pまた おこしください{EOS}"
	.if (. - CableClub_Text_UnionRoomAdapterNotConnected) > 0x40
	.error "CableClub_Text_UnionRoomAdapterNotConnected may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_UnionRoomAdapterNotConnected) < 0x40
	.space 0x40 - (. - CableClub_Text_UnionRoomAdapterNotConnected)
	.endif

	@ data/text/cable_club.inc:185 CableClub_Text_OhExcuseMe
	.globl CableClub_Text_OhExcuseMe
CableClub_Text_OhExcuseMe: @ 0x08248177
	.string "あ……\nおきゃくさま!{EOS}"
	.if (. - CableClub_Text_OhExcuseMe) > 0xc
	.error "CableClub_Text_OhExcuseMe may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_OhExcuseMe) < 0xc
	.space 0xc - (. - CableClub_Text_OhExcuseMe)
	.endif

	@ data/text/cable_club.inc:188 CableClub_Text_PlayerIsWaiting
	.globl CableClub_Text_PlayerIsWaiting
CableClub_Text_PlayerIsWaiting: @ 0x08248183
	.string "あら! いま {STR_VAR_1}さんも\nプレイちゅう みたいですね\lがんばって くださいね!{EOS}"
	.if (. - CableClub_Text_PlayerIsWaiting) > 0x28
	.error "CableClub_Text_PlayerIsWaiting may not grow beyond its original slot"
	.endif
	.if (. - CableClub_Text_PlayerIsWaiting) < 0x28
	.space 0x28 - (. - CableClub_Text_PlayerIsWaiting)
	.endif

	@ data/text/cable_club.inc:191 MossdeepCity_GameCorner_1F_Text_DescribeWhichGame
	.globl MossdeepCity_GameCorner_1F_Text_DescribeWhichGame
MossdeepCity_GameCorner_1F_Text_DescribeWhichGame: @ 0x082481AB
	.string "ぼくは ゲームの せつめいを\nしますよ!\lどの せつめいを ききますか?{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_DescribeWhichGame) > 0x25
	.error "MossdeepCity_GameCorner_1F_Text_DescribeWhichGame may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_DescribeWhichGame) < 0x25
	.space 0x25 - (. - MossdeepCity_GameCorner_1F_Text_DescribeWhichGame)
	.endif

	@ data/text/cable_club.inc:194 MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo
	.globl MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo
MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo: @ 0x082481D0
	.string "「ミニポケモンでジャンプ」は\nツルの なわを Aボタンで\lタイミングよく とぶ ゲームです\pさんか できる ポケモンは\nたかさ 70センチくらい までの\lちいさい ポケモンに なります\pもぐっていたり とんでいたり する\nポケモンは ジャンプが\lじょうずに できないので\lざんねんながら さんか できません\pみんなの ジャンプの タイミングが\nピッタリ あえば\lよいことが ありますよ!{EOS}"
	.if (. - MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo) > 0xc2
	.error "MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo) < 0xc2
	.space 0xc2 - (. - MossdeepCity_GameCorner_1F_Text_PokemonJumpInfo)
	.endif
