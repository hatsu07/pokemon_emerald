	@ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
	.globl gText_Rom_5CA88C
gText_Rom_5CA88C: @ 0x085CA88C
	.string "ヒロミ$"
	.if (. - gText_Rom_5CA88C) > 0x4
	.error "gText_Rom_5CA88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA88C) < 0x4
	.space 0x4 - (. - gText_Rom_5CA88C)
	.endif

	@ src/data/trainers.h:38007 trainers_line_38007
	.globl gText_Rom_5CA890
gText_Rom_5CA890: @ 0x085CA890
	.string "ユウリ$"
	.if (. - gText_Rom_5CA890) > 0x4
	.error "gText_Rom_5CA890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA890) < 0x4
	.space 0x4 - (. - gText_Rom_5CA890)
	.endif

	@ src/data/trainers.h:3442 trainers_line_3442
	.globl gText_Rom_5CA894
gText_Rom_5CA894: @ 0x085CA894
	.string "ヨシオ$"
	.if (. - gText_Rom_5CA894) > 0x4
	.error "gText_Rom_5CA894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA894) < 0x4
	.space 0x4 - (. - gText_Rom_5CA894)
	.endif
	@ Decoded text from ROM range: offset=0x5CA898, size=0x5
	.string "サダハル$"

	@ src/player_pc.c:194 player_pc_line_194
	.globl gText_Rom_5CA89D
gText_Rom_5CA89D: @ 0x085CA89D
	.string "せつぞくを きる$"
	.if (. - gText_Rom_5CA89D) > 0x9
	.error "gText_Rom_5CA89D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA89D) < 0x9
	.space 0x9 - (. - gText_Rom_5CA89D)
	.endif

	@ src/player_pc.c:193 player_pc_line_193
	.globl gText_Rom_5CA8A6
gText_Rom_5CA8A6: @ 0x085CA8A6
	.string "もようがえ$"
	.if (. - gText_Rom_5CA8A6) > 0x6
	.error "gText_Rom_5CA8A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8A6) < 0x6
	.space 0x6 - (. - gText_Rom_5CA8A6)
	.endif

	@ src/player_pc.c:191 player_pc_line_191
	.globl gText_Rom_5CA8AC
gText_Rom_5CA8AC: @ 0x085CA8AC
	.string "どうぐ あずかり$"
	.if (. - gText_Rom_5CA8AC) > 0x9
	.error "gText_Rom_5CA8AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8AC) < 0x9
	.space 0x9 - (. - gText_Rom_5CA8AC)
	.endif
	.globl gUnknown_85CA8B5
gUnknown_85CA8B5: @ 0x085CA8B5

	@ src/player_pc.c:174 sText_Mailbox
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8B5
gText_Rom_5CA8B5: @ 0x085CA8B5
	.string "メールボックス$"
	.if (. - gText_Rom_5CA8B5) != 0x8
	.error "gText_Rom_5CA8B5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8B8
	.set gText_Rom_5CA8B8, gText_Rom_5CA8B5 + 0x3

	@ src/player_pc.c:172 sText_DepositItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8BD
gText_Rom_5CA8BD: @ 0x085CA8BD
	.string "どうぐを あずける$"
	.if (. - gText_Rom_5CA8BD) != 0xa
	.error "gText_Rom_5CA8BD must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8C2
	.set gText_Rom_5CA8C2, gText_Rom_5CA8BD + 0x5
	.globl gUnknown_85CA8C7
gUnknown_85CA8C7: @ 0x085CA8C7

	@ src/player_pc.c:171 sText_WithdrawItem
	.globl gText_Rom_5CA8C7
gText_Rom_5CA8C7: @ 0x085CA8C7
	.string "どうぐを ひきだす$"
	.if (. - gText_Rom_5CA8C7) > 0xa
	.error "gText_Rom_5CA8C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8C7) < 0xa
	.space 0xa - (. - gText_Rom_5CA8C7)
	.endif
	.globl gUnknown_85CA8D1
gUnknown_85CA8D1: @ 0x085CA8D1

	@ src/player_pc.c:173 sText_TossItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8D1
gText_Rom_5CA8D1: @ 0x085CA8D1
	.string "どうぐを すてる$"
	.if (. - gText_Rom_5CA8D1) != 0x9
	.error "gText_Rom_5CA8D1 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8D6
	.set gText_Rom_5CA8D6, gText_Rom_5CA8D1 + 0x5

	@ src/player_pc.c:184 player_pc_line_184
	.globl gText_Rom_5CA8DA
gText_Rom_5CA8DA: @ 0x085CA8DA
	.string "パソコン に\nどうぐを あずけます$"
	.if (. - gText_Rom_5CA8DA) > 0x12
	.error "gText_Rom_5CA8DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8DA) < 0x12
	.space 0x12 - (. - gText_Rom_5CA8DA)
	.endif

	@ src/player_pc.c:183 player_pc_line_183
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8EC
gText_Rom_5CA8EC: @ 0x085CA8EC
	.string "パソコン から\nどうぐを ひきだします$"
	.if (. - gText_Rom_5CA8EC) != 0x14
	.error "gText_Rom_5CA8EC must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8FC
	.set gText_Rom_5CA8FC, gText_Rom_5CA8EC + 0x10

	@ src/player_pc.c:185 player_pc_line_185
	.globl gText_Rom_5CA900
gText_Rom_5CA900: @ 0x085CA900
	.string "パソコン に あずけている\nどうぐを すてます$"
	.if (. - gText_Rom_5CA900) > 0x18
	.error "gText_Rom_5CA900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA900) < 0x18
	.space 0x18 - (. - gText_Rom_5CA900)
	.endif
	.globl gUnknown_85CA918
gUnknown_85CA918: @ 0x085CA918

	@ src/strings.c:452 gText_NoItems
	.globl gText_Rom_5CA918
gText_Rom_5CA918: @ 0x085CA918
	.string "なにも ありません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA918) > 0xd
	.error "gText_Rom_5CA918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA918) < 0xd
	.space 0xd - (. - gText_Rom_5CA918)
	.endif
	.globl gUnknown_85CA925
gUnknown_85CA925: @ 0x085CA925

	@ src/player_pc.c:178 sText_NoRoomInBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA925
gText_Rom_5CA925: @ 0x085CA925
	.string "これいじょう\nバッグに はいりません$"
	.if (. - gText_Rom_5CA925) != 0x13
	.error "gText_Rom_5CA925 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA932
	.set gText_Rom_5CA932, gText_Rom_5CA925 + 0xd
	.globl gText_Rom_5CA934
	.set gText_Rom_5CA934, gText_Rom_5CA925 + 0xf
	.globl gUnknown_85CA938
gUnknown_85CA938: @ 0x085CA938

	@ src/player_pc.c:176 sText_WithdrawHowManyItems
	.globl gText_Rom_5CA938
gText_Rom_5CA938: @ 0x085CA938
	.string "{STR_VAR_1}を\nいくつ ひきだしますか?$"
	.if (. - gText_Rom_5CA938) > 0x11
	.error "gText_Rom_5CA938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA938) < 0x11
	.space 0x11 - (. - gText_Rom_5CA938)
	.endif
	.globl gUnknown_85CA949
gUnknown_85CA949: @ 0x085CA949

	@ src/player_pc.c:177 sText_WithdrawXItems
	.globl gText_Rom_5CA949
gText_Rom_5CA949: @ 0x085CA949
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ ひきだしました$"
	.if (. - gText_Rom_5CA949) > 0x10
	.error "gText_Rom_5CA949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA949) < 0x10
	.space 0x10 - (. - gText_Rom_5CA949)
	.endif

	@ src/player_pc.c:230 player_pc_line_230
	.globl gText_Rom_5CA959
gText_Rom_5CA959: @ 0x085CA959
	.string "ないようを よむ$"
	.if (. - gText_Rom_5CA959) > 0x9
	.error "gText_Rom_5CA959 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA959) < 0x9
	.space 0x9 - (. - gText_Rom_5CA959)
	.endif

	@ src/player_pc.c:231 player_pc_line_231
	.globl gText_Rom_5CA962
gText_Rom_5CA962: @ 0x085CA962
	.string "バッグに もどす$"
	.if (. - gText_Rom_5CA962) > 0x9
	.error "gText_Rom_5CA962 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA962) < 0x9
	.space 0x9 - (. - gText_Rom_5CA962)
	.endif

	@ src/player_pc.c:232 player_pc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA96B
gText_Rom_5CA96B: @ 0x085CA96B
	.string "ポケモンに もたせる$"
	.if (. - gText_Rom_5CA96B) != 0xb
	.error "gText_Rom_5CA96B must retain its original byte length"
	.endif
	.globl gText_Rom_5CA971
	.set gText_Rom_5CA971, gText_Rom_5CA96B + 0x6
	.globl gUnknown_85CA976
gUnknown_85CA976: @ 0x085CA976

	@ src/strings.c:453 gText_NoMailHere
	.globl gText_Rom_5CA976
gText_Rom_5CA976: @ 0x085CA976
	.string "メールは 1つうも ありません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA976) > 0x12
	.error "gText_Rom_5CA976 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA976) < 0x12
	.space 0x12 - (. - gText_Rom_5CA976)
	.endif
	.globl gUnknown_85CA988
gUnknown_85CA988: @ 0x085CA988

	@ src/strings.c:454 gText_WhatToDoWithVar1sMail
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA988
gText_Rom_5CA988: @ 0x085CA988
	.string "{STR_VAR_1} の\nメールを どうしますか?$"
	.if (. - gText_Rom_5CA988) != 0x12
	.error "gText_Rom_5CA988 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA98D
	.set gText_Rom_5CA98D, gText_Rom_5CA988 + 0x5
	.globl gUnknown_85CA99A
gUnknown_85CA99A: @ 0x085CA99A

	@ src/strings.c:455 gText_MessageWillBeLost
	.globl gText_Rom_5CA99A
gText_Rom_5CA99A: @ 0x085CA99A
	.string "ないようは きえてしまいますが\nよろしいですか?$"
	.if (. - gText_Rom_5CA99A) > 0x19
	.error "gText_Rom_5CA99A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA99A) < 0x19
	.space 0x19 - (. - gText_Rom_5CA99A)
	.endif
	.globl gUnknown_85CA9B3
gUnknown_85CA9B3: @ 0x085CA9B3

	@ src/strings.c:456 gText_BagIsFull
	.globl gText_Rom_5CA9B3
gText_Rom_5CA9B3: @ 0x085CA9B3
	.string "バッグが いっぱいです!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA9B3) > 0xf
	.error "gText_Rom_5CA9B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9B3) < 0xf
	.space 0xf - (. - gText_Rom_5CA9B3)
	.endif
	.globl gUnknown_85CA9C2
gUnknown_85CA9C2: @ 0x085CA9C2

	@ src/strings.c:457 gText_MailToBagMessageErased
	.globl gText_Rom_5CA9C2
gText_Rom_5CA9C2: @ 0x085CA9C2
	.string "ないようを けした メールを\nバッグに いれました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA9C2) > 0x1c
	.error "gText_Rom_5CA9C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9C2) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA9C2)
	.endif
	.globl gUnknown_85CA9DE
gUnknown_85CA9DE: @ 0x085CA9DE

	@ asm/tv.s:8388 GetMomOrDadStringForTVMessage
	.globl gText_Rom_5CA9DE
gText_Rom_5CA9DE: @ 0x085CA9DE
	.string "パパ$"
	.if (. - gText_Rom_5CA9DE) > 0x3
	.error "gText_Rom_5CA9DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9DE) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9DE)
	.endif
	.globl gUnknown_85CA9E1
gUnknown_85CA9E1: @ 0x085CA9E1

	@ asm/tv.s:8326 GetMomOrDadStringForTVMessage
	.globl gText_Rom_5CA9E1
gText_Rom_5CA9E1: @ 0x085CA9E1
	.string "ママ$"
	.if (. - gText_Rom_5CA9E1) > 0x3
	.error "gText_Rom_5CA9E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E1) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9E1)
	.endif
	.globl gUnknown_85CA9E4
gUnknown_85CA9E4: @ 0x085CA9E4

	@ src/data/trainers.h:16880 trainers_line_16880 (+2 aliases)
	.globl gText_Rom_5CA9E4
gText_Rom_5CA9E4: @ 0x085CA9E4
	.string "ミクリ$"
	.if (. - gText_Rom_5CA9E4) > 0x4
	.error "gText_Rom_5CA9E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E4) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9E4)
	.endif
	.globl gUnknown_85CA9E8
gUnknown_85CA9E8: @ 0x085CA9E8

	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_5CA9E8
gText_Rom_5CA9E8: @ 0x085CA9E8
	.string "ダイゴ$"
	.if (. - gText_Rom_5CA9E8) > 0x4
	.error "gText_Rom_5CA9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E8) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9E8)
	.endif
	.globl gUnknown_85CA9EC
gUnknown_85CA9EC: @ 0x085CA9EC

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_5CA9EC
gText_Rom_5CA9EC: @ 0x085CA9EC
	.string "トウキ$"
	.if (. - gText_Rom_5CA9EC) > 0x4
	.error "gText_Rom_5CA9EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9EC) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9EC)
	.endif
	.globl gUnknown_85CA9F0
gUnknown_85CA9F0: @ 0x085CA9F0

