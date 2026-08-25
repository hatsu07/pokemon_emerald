	@ data/maps/BattleFrontier_Lounge8/scripts.inc:16 BattleFrontier_Lounge8_Text_WhatATrainerNeeds
	.globl BattleFrontier_Lounge8_Text_WhatATrainerNeeds
BattleFrontier_Lounge8_Text_WhatATrainerNeeds: @ 0x0823AFEE
	.string "トレーナーに ひつような もの……\pちしき…\nせんりゃく…\lうん…\lとうし…\lこころ…\lゆうき…\lそして さいのう か……\pぼく ぜんぶ バッチリ じゃん!\nどこの しせつでも らくしょー だね\pえっ? ポケモン? なんのことだい?"
	.byte EOS
	.if (. - BattleFrontier_Lounge8_Text_WhatATrainerNeeds) > 0x75
	.error "BattleFrontier_Lounge8_Text_WhatATrainerNeeds may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge8_Text_WhatATrainerNeeds) < 0x75
	.space 0x75 - (. - BattleFrontier_Lounge8_Text_WhatATrainerNeeds)
	.endif
	@ data/maps/BattleFrontier_Lounge8/scripts.inc:19 BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains
	.globl BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains
BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains: @ 0x0823B063
	.string "フロンティアブレーンって しってる?\pバトルフロンティアに ある\n7つの しせつを かんりする\lとくべつな トレーナーたちの ことを\lエニシダは そうよんでる らしいわ"
	.byte EOS
	.if (. - BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains) > 0x55
	.error "BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains) < 0x55
	.space 0x55 - (. - BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains)
	.endif
	@ data/maps/BattleFrontier_Lounge8/scripts.inc:22 BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling
	.globl BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling
BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling: @ 0x0823B0B8
	.string "ぼく バトルタワーで おねえちゃんに\nたたかいの さいのうが あるねって\lすごく ほめられたのー!\pでも ぼく ポケモン コンテストの\nほーが すき なの!\pでも ポケモン コンテストは\nぜんぜん だめだよ!\pさいのうって すきとは ちがうの?"
	.byte EOS
	.if (. - BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling) > 0x7b
	.error "BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling) < 0x7b
	.space 0x7b - (. - BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling)
	.endif
	@ Embedded ROM bytes: file offset 0x23B133, size 0x4C
	.byte 0x00, 0x03, 0x3F, 0xB1, 0x23, 0x08, 0x05, 0x0F, 0x79, 0x24, 0x08, 0x00, 0x9F, 0x16, 0x00, 0x02
	.byte 0x16, 0x0B, 0x80, 0x01, 0x00, 0x04, 0xB8, 0x29, 0x24, 0x08, 0x66, 0x6D, 0x6C, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0xC4, 0xB1, 0x23, 0x08, 0x09, 0x02, 0x02
	.byte 0x0F, 0x00
	.4byte BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge
	.byte 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x30, 0xA1, 0x3B, 0x01, 0x00
	.byte 0x00, 0x0F, 0x00, 0x16, 0xB2, 0x23, 0x08, 0x09, 0x04, 0xC5, 0x6C, 0x02
