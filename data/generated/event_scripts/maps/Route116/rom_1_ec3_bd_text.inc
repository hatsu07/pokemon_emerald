	@ data/maps/Route116/scripts.inc:351 Route116_Text_ScoundrelMadeOffWithPeeko
	.globl Route116_Text_ScoundrelMadeOffWithPeeko
Route116_Text_ScoundrelMadeOffWithPeeko: @ 0x081EBF46
	.string "あああ なんという ことだ!\pピーコちゃんと さんぽを していたら\nいきなり おかしな やつが やってきて\pわしの かわいい ピーコちゃんが\nうばわれて しまったのじゃ!\pうおー! ピーコちゃーん!{EOS}"
	.if (. - Route116_Text_ScoundrelMadeOffWithPeeko) > 0x64
	.error "Route116_Text_ScoundrelMadeOffWithPeeko may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_ScoundrelMadeOffWithPeeko) < 0x64
	.space 0x64 - (. - Route116_Text_ScoundrelMadeOffWithPeeko)
	.endif
	@ data/maps/Route116/scripts.inc:359 Route116_Text_WantToDigTunnel
	.globl Route116_Text_WantToDigTunnel
Route116_Text_WantToDigTunnel: @ 0x081EBFAA
	.string "ぬぉー!!\pトンネル ほりてー!!{EOS}"
	.if (. - Route116_Text_WantToDigTunnel) > 0x12
	.error "Route116_Text_WantToDigTunnel may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_WantToDigTunnel) < 0x12
	.space 0x12 - (. - Route116_Text_WantToDigTunnel)
	.endif
	@ data/maps/Route116/scripts.inc:363 Route116_Text_DiggingTunnelWhenGoonOrderedMeOut
	.globl Route116_Text_DiggingTunnelWhenGoonOrderedMeOut
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut: @ 0x081EBFBC
	.string "ぬぉー!!\nなんて ことだ!?\pどうぐも なにも つかわずに\nトンネルを ほっていたのに\lへんな おとこに おいだされた!\pあの トンネルには\nおおきな ものおとに はんのう して\lさわぎだす ポケモンが いる\pだから きかいを つかっての\nかいはつ こうじを やめたのに……\pへんに さわぎを おこされると\nポケモンが おびえないか しんぱいだ!{EOS}"
	.if (. - Route116_Text_DiggingTunnelWhenGoonOrderedMeOut) > 0xaf
	.error "Route116_Text_DiggingTunnelWhenGoonOrderedMeOut may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DiggingTunnelWhenGoonOrderedMeOut) < 0xaf
	.space 0xaf - (. - Route116_Text_DiggingTunnelWhenGoonOrderedMeOut)
	.endif
	@ data/maps/Route116/scripts.inc:377 Route116_Text_GoonHightailedItOutOfTunnel
	.globl Route116_Text_GoonHightailedItOutOfTunnel
Route116_Text_GoonHightailedItOutOfTunnel: @ 0x081EC06B
	.string "ぬぉー!!\pへんな おとこが とびだしていった!\nこれで トンネルを ほれるよ!{EOS}"
	.if (. - Route116_Text_GoonHightailedItOutOfTunnel) > 0x29
	.error "Route116_Text_GoonHightailedItOutOfTunnel may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_GoonHightailedItOutOfTunnel) < 0x29
	.space 0x29 - (. - Route116_Text_GoonHightailedItOutOfTunnel)
	.endif
	@ data/maps/Route116/scripts.inc:382 Route116_Text_ThankYouTokenOfAppreciation
	.globl Route116_Text_ThankYouTokenOfAppreciation
Route116_Text_ThankYouTokenOfAppreciation: @ 0x081EC094
	.string "ああっ!\nきみは!!\pトウカのもりで たすけてくれた だけでなく\nぬすまれた にもつを とりかえし\lはたまた カイナへの とどけものを\lこころよく ひきうけてくれた ひと!!\pクスノキかんちょう から\n「にもつが とどいた」と\lれんらくが ありましたよ!\pどうも ありがとう なのです!\nかんしゃ かんげき あめ あられ なのです\pそんな すてきな トレーナーさんに\nグッド ニュース!\pさいきん わがしゃ では\nあたらしい モンスターボールの\lかいはつに せいこう したのです!\pかんしゃの きもちとして\nトレーナーさんにも プレゼント なのよね!{EOS}"
	.if (. - Route116_Text_ThankYouTokenOfAppreciation) > 0x114
	.error "Route116_Text_ThankYouTokenOfAppreciation may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_ThankYouTokenOfAppreciation) < 0x114
	.space 0x114 - (. - Route116_Text_ThankYouTokenOfAppreciation)
	.endif
	@ data/maps/Route116/scripts.inc:402 Route116_Text_NewBallAvailableAtMart
	.globl Route116_Text_NewBallAvailableAtMart
Route116_Text_NewBallAvailableAtMart: @ 0x081EC1A8
	.string "あたらしい モンスターボールは\nカナズミの フレンドリィ ショップで\lうってますからね!\pぜひ つかって みてください!\nではでは……{EOS}"
	.if (. - Route116_Text_NewBallAvailableAtMart) > 0x44
	.error "Route116_Text_NewBallAvailableAtMart may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_NewBallAvailableAtMart) < 0x44
	.space 0x44 - (. - Route116_Text_NewBallAvailableAtMart)
	.endif
	@ data/maps/Route116/scripts.inc:409 Route116_Text_BagIsJamPacked
	.globl Route116_Text_BagIsJamPacked
Route116_Text_BagIsJamPacked: @ 0x081EC1EC
	.string "どうぐ いっぱいで\nリピートボール あげられないね{EOS}"
	.if (. - Route116_Text_BagIsJamPacked) > 0x1a
	.error "Route116_Text_BagIsJamPacked may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_BagIsJamPacked) < 0x1a
	.space 0x1a - (. - Route116_Text_BagIsJamPacked)
	.endif
	@ data/maps/Route116/scripts.inc:413 Route116_Text_TokenOfAppreciation
	.globl Route116_Text_TokenOfAppreciation
Route116_Text_TokenOfAppreciation: @ 0x081EC206
	.string "にもつを とどけてくれた ことへの\nかんしゃの きもちとして\lトレーナーさん にも あたらしい\lモンスターボールを プレゼント なのよね!{EOS}"
	.if (. - Route116_Text_TokenOfAppreciation) > 0x46
	.error "Route116_Text_TokenOfAppreciation may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_TokenOfAppreciation) < 0x46
	.space 0x46 - (. - Route116_Text_TokenOfAppreciation)
	.endif
	@ data/maps/Route116/scripts.inc:419 Route116_Text_CanYouHelpMeFindGlasses
	.globl Route116_Text_CanYouHelpMeFindGlasses
Route116_Text_CanYouHelpMeFindGlasses: @ 0x081EC24C
	.string "メガネを おとしたんだ……\nきみも さがすの てつだってよ{EOS}"
	.if (. - Route116_Text_CanYouHelpMeFindGlasses) > 0x1e
	.error "Route116_Text_CanYouHelpMeFindGlasses may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_CanYouHelpMeFindGlasses) < 0x1e
	.space 0x1e - (. - Route116_Text_CanYouHelpMeFindGlasses)
	.endif
	@ data/maps/Route116/scripts.inc:423 Route116_Text_MayISeeThoseGlasses
	.globl Route116_Text_MayISeeThoseGlasses
Route116_Text_MayISeeThoseGlasses: @ 0x081EC26A
	.string "その メガネ……?\nちょっと みせてよ!{EOS}"
	.if (. - Route116_Text_MayISeeThoseGlasses) > 0x15
	.error "Route116_Text_MayISeeThoseGlasses may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_MayISeeThoseGlasses) < 0x15
	.space 0x15 - (. - Route116_Text_MayISeeThoseGlasses)
	.endif
	@ data/maps/Route116/scripts.inc:427 Route116_Text_NotWhatImLookingForMaybeTheyArentHere
	.globl Route116_Text_NotWhatImLookingForMaybeTheyArentHere
Route116_Text_NotWhatImLookingForMaybeTheyArentHere: @ 0x081EC27F
	.string "うーむ……\nこれは くろいメガネ だね\lぼくが さがしているのと ちがうなあ……\pここには ぼくの メガネ ないのかなあ{EOS}"
	.if (. - Route116_Text_NotWhatImLookingForMaybeTheyArentHere) > 0x3d
	.error "Route116_Text_NotWhatImLookingForMaybeTheyArentHere may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_NotWhatImLookingForMaybeTheyArentHere) < 0x3d
	.space 0x3d - (. - Route116_Text_NotWhatImLookingForMaybeTheyArentHere)
	.endif
	@ data/maps/Route116/scripts.inc:433 Route116_Text_CantFindGlassesNotHere
	.globl Route116_Text_CantFindGlassesNotHere
Route116_Text_CantFindGlassesNotHere: @ 0x081EC2BC
	.string "うーむ……\nどうにも メガネが みつからないんだ\lここには ぼくの メガネ ないのかなあ{EOS}"
	.if (. - Route116_Text_CantFindGlassesNotHere) > 0x2d
	.error "Route116_Text_CantFindGlassesNotHere may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_CantFindGlassesNotHere) < 0x2d
	.space 0x2d - (. - Route116_Text_CantFindGlassesNotHere)
	.endif
	@ data/maps/Route116/scripts.inc:438 Route116_Text_NotWhatImLookingFor
	.globl Route116_Text_NotWhatImLookingFor
Route116_Text_NotWhatImLookingFor: @ 0x081EC2E9
	.string "うーむ……\nこれは くろいメガネ だね\lぼくが さがしているのと ちがうなあ……{EOS}"
	.if (. - Route116_Text_NotWhatImLookingFor) > 0x29
	.error "Route116_Text_NotWhatImLookingFor may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_NotWhatImLookingFor) < 0x29
	.space 0x29 - (. - Route116_Text_NotWhatImLookingFor)
	.endif
	@ field-script:0x1EBC02 FieldScriptText_1EC312
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_1EC312
FieldScriptText_1EC312: @ 0x081EC312
	.string "ここは　116ばん　どうろ\n{ESCAPE}{0x02}　カナズミシティ{EOS}"
	.if (. - FieldScriptText_1EC312) != 0x1a
	.error "FieldScriptText_1EC312 must retain its original byte length"
	.endif
	@ data/maps/Route116/scripts.inc:447 Route116_Text_RusturfTunnelSign (+1 aliases)
	.globl gText_Rom_1EC32C
gText_Rom_1EC32C: @ 0x081EC32C
	.string "カナズミと シダケを むすぶ\n「カナシダ トンネル」\pかいつう こうじは ちゅうしに なりました{EOS}"
	.if (. - gText_Rom_1EC32C) > 0x31
	.error "gText_Rom_1EC32C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC32C) < 0x31
	.space 0x31 - (. - gText_Rom_1EC32C)
	.endif
	@ data/maps/Route116/scripts.inc:452 Route116_Text_TunnelersRestHouse
	.globl Route116_Text_TunnelersRestHouse
Route116_Text_TunnelersRestHouse: @ 0x081EC35D
	.string "トンネルこうじ さぎょういん つめしょ{EOS}"
	.if (. - Route116_Text_TunnelersRestHouse) > 0x14
	.error "Route116_Text_TunnelersRestHouse may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_TunnelersRestHouse) < 0x14
	.space 0x14 - (. - Route116_Text_TunnelersRestHouse)
	.endif
	@ data/maps/Route116/scripts.inc:455 Route116_Text_TrainerTipsBToStopEvolution
	.globl Route116_Text_TrainerTipsBToStopEvolution
Route116_Text_TrainerTipsBToStopEvolution: @ 0x081EC371
	.string "おとくな けいじばん!\pポケモンが しんか しそうなとき\nBボタンを おすと\lびっくりして しんかを やめます!\pこれを しんかキャンセルと いいます{EOS}"
	.if (. - Route116_Text_TrainerTipsBToStopEvolution) > 0x4c
	.error "Route116_Text_TrainerTipsBToStopEvolution may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_TrainerTipsBToStopEvolution) < 0x4c
	.space 0x4c - (. - Route116_Text_TrainerTipsBToStopEvolution)
	.endif
	@ data/maps/Route116/scripts.inc:462 Route116_Text_TrainerTipsBagHasPockets
	.globl Route116_Text_TrainerTipsBagHasPockets
Route116_Text_TrainerTipsBagHasPockets: @ 0x081EC3BD
	.string "おとくな けいじばん!!\pバッグには いくつかの ポケットが あり\nいれる どうぐの しゅるい によって\lそれぞれの ポケットに\lオートで ぶんるい されます\pまさに トレーナーの ひつじゅひん です!{EOS}"
	.if (. - Route116_Text_TrainerTipsBagHasPockets) > 0x66
	.error "Route116_Text_TrainerTipsBagHasPockets may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_TrainerTipsBagHasPockets) < 0x66
	.space 0x66 - (. - Route116_Text_TrainerTipsBagHasPockets)
	.endif
	@ Embedded ROM bytes: file offset 0x1EC423, size 0x2FF
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0x29, 0xC4, 0x1E, 0x08, 0x00, 0x04, 0x2F, 0xC4, 0x1E, 0x08, 0x02, 0x2B, 0x86, 0x00, 0x06
	.byte 0x00, 0x3F, 0xC4, 0x1E, 0x08, 0x63, 0x03, 0x00, 0x2F, 0x00, 0x06, 0x00, 0x03, 0x0F, 0x00, 0x69
	.byte 0xC7, 0x1E, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte FieldScriptText_1EC78F @ ROM pointer 0x081EC78F
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0x22, 0xC7, 0x1E, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x9A, 0xC7
	.byte 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00, 0xB3, 0xC7, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00
	.4byte FieldScriptText_1EC7CD @ ROM pointer 0x081EC7CD
	.byte 0x09, 0x03, 0x02, 0x5C, 0x02, 0x1A, 0x02, 0x00, 0x00, 0x1F, 0xDB, 0x25, 0x08, 0x3E, 0xDB, 0x25
	.byte 0x08, 0xA2, 0xC4, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0xC1, 0xC4, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route117_Text_IsaacPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25
	.byte 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte Route117_Text_IsaacRegister
	.byte 0x09, 0x04, 0x16, 0x04, 0x80
	.byte 0x1A, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x1A, 0x02, 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05
	.byte 0x1A, 0x02, 0x00, 0x00
	.4byte Route117_Text_IsaacRematchIntro @ ROM pointer 0x0825DBAD
	.4byte Route117_Text_IsaacRematchDefeat @ ROM pointer 0x0825DBCF
	.byte 0x0F, 0x00
	.4byte Route117_Text_IsaacPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0x21, 0x02, 0x00, 0x00
	.4byte Route117_Text_LydiaIntro
	.4byte Route117_Text_LydiaDefeat
	.byte 0x04, 0xC5, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00
	.byte 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x23, 0xC5, 0x1E, 0x08, 0x0F, 0x00, 0x57, 0xDC, 0x25
	.byte 0x08, 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00, 0x78, 0xDC, 0x25
	.byte 0x08, 0x09, 0x04, 0x16, 0x04, 0x80, 0x21, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x21, 0x02
	.byte 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x21, 0x02, 0x00, 0x00
	.4byte Route117_Text_LydiaRematchIntro
	.4byte Route117_Text_LydiaRematchDefeat
	.byte 0x0F, 0x00
	.4byte Route117_Text_LydiaPostRematch @ ROM pointer 0x0825DCD5
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0x6C, 0x01, 0x00, 0x00, 0xF7, 0xDC, 0x25, 0x08, 0x21, 0xDD, 0x25
	.byte 0x08, 0x66, 0xC5, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0x85, 0xC5, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route117_Text_DylanPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25
	.byte 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte Route117_Text_DylanRegister
	.byte 0x09, 0x04, 0x16, 0x04, 0x80
	.byte 0x6C, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x6C, 0x01, 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05
	.byte 0x6C, 0x01, 0x00, 0x00
	.4byte Route117_Text_DylanRematchIntro @ ROM pointer 0x0825DD7C
	.4byte Route117_Text_DylanRematchDefeat @ ROM pointer 0x0825DDB6
	.byte 0x0F, 0x00
	.4byte Route117_Text_DylanPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x02, 0x71, 0x01, 0x00, 0x00
	.4byte Route117_Text_MariaIntro
	.byte 0x21, 0xDE, 0x25, 0x08, 0xC8, 0xC5, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00
	.byte 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xE7, 0xC5, 0x1E, 0x08, 0x0F, 0x00, 0x32, 0xDE, 0x25
	.byte 0x08, 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00, 0x60, 0xDE, 0x25
	.byte 0x08, 0x09, 0x04, 0x16, 0x04, 0x80, 0x71, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x71, 0x01
	.byte 0x09, 0x08, 0x6C, 0x02, 0x5C, 0x05, 0x71, 0x01, 0x00, 0x00
	.4byte Route117_Text_MariaRematchIntro
	.byte 0xB6, 0xDE
	.byte 0x25, 0x08, 0x0F, 0x00
	.4byte Route117_Text_MariaPostRematch @ ROM pointer 0x0825DEC7
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xE3, 0x00, 0x00, 0x00
	.4byte Route117_Text_DerekIntro @ ROM pointer 0x0825DEEE
	.4byte Route117_Text_DerekDefeat @ ROM pointer 0x0825DF2B
	.byte 0x0F, 0x00
	.4byte Route117_Text_DerekPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x06, 0x1F, 0x01, 0x00, 0x00
	.4byte Route117_Text_AnnaIntro @ ROM pointer 0x0825DF8B
	.4byte Route117_Text_AnnaDefeat @ ROM pointer 0x0825DFB1
	.4byte gText_Rom_25E033 @ ROM pointer 0x0825E033
	.byte 0x45, 0xC6, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0x5E, 0xC6, 0x1E, 0x08, 0x0F, 0x00
	.4byte Route117_Text_AnnaPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route117_Text_AnnaAndMegRegister @ ROM pointer 0x0825E00A
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x1F, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x1F, 0x01, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x07, 0x1F, 0x01, 0x00, 0x00
	.4byte Route117_Text_AnnaRematchIntro @ ROM pointer 0x0825E105
	.4byte Route117_Text_AnnaRematchDefeat @ ROM pointer 0x0825E122
	.4byte gText_Rom_25E170 @ ROM pointer 0x0825E170
	.byte 0x0F, 0x00
	.4byte Route117_Text_AnnaPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x06, 0x1F, 0x01, 0x00, 0x00
	.4byte Route117_Text_MegIntro @ ROM pointer 0x0825E05B
	.4byte Route117_Text_MegDefeat @ ROM pointer 0x0825E07E
	.4byte gText_Rom_25E0C4 @ ROM pointer 0x0825E0C4
	.byte 0xA9, 0xC6, 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01
	.byte 0xC2, 0xC6, 0x1E, 0x08, 0x0F, 0x00, 0x92, 0xE0, 0x25, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route117_Text_AnnaAndMegRegister @ ROM pointer 0x0825E00A
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x1F, 0x01, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0x1F, 0x01, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x07, 0x1F, 0x01, 0x00, 0x00
	.4byte Route117_Text_MegRematchIntro @ ROM pointer 0x0825E198
	.4byte Route117_Text_MegRematchDefeat @ ROM pointer 0x0825E1BC
	.4byte gText_Rom_25E1F0 @ ROM pointer 0x0825E1F0
	.byte 0x0F, 0x00
	.4byte Route117_Text_MegPostRematch
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xF3, 0x02, 0x00, 0x00
	.4byte Route117_Text_MelinaIntro @ ROM pointer 0x0825E231
	.4byte Route117_Text_MelinaDefeat @ ROM pointer 0x0825E252
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte Route117_Text_MelinaPostBattle @ ROM pointer 0x0825E262
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xF4, 0x02, 0x00, 0x00
	.4byte Route117_Text_BrandiIntro
	.4byte Route117_Text_BrandiDefeat
	.byte 0x0F, 0x00, 0x9E, 0xE2, 0x25, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xF5, 0x02, 0x00, 0x00
	.4byte Route117_Text_AishaIntro @ ROM pointer 0x0825E2C3
	.4byte Route117_Text_AishaDefeat @ ROM pointer 0x0825E2D9
	.byte 0x0F, 0x00
	.4byte Route117_Text_AishaPostBattle @ ROM pointer 0x0825E2FD
	.byte 0x09, 0x06, 0x02
