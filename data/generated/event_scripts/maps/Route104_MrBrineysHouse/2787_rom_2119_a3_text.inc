	@ data/maps/Route104_MrBrineysHouse/scripts.inc:97 Route104_MrBrineysHouse_Text_WaitUpPeeko
	.globl Route104_MrBrineysHouse_Text_WaitUpPeeko
Route104_MrBrineysHouse_Text_WaitUpPeeko: @ 0x08211732
	.string "ハギ『こらこら!\nまて まて ピーコちゃん!{EOS}"
	.if (. - Route104_MrBrineysHouse_Text_WaitUpPeeko) > 0x17
	.error "Route104_MrBrineysHouse_Text_WaitUpPeeko may not grow beyond its original slot"
	.endif
	.if (. - Route104_MrBrineysHouse_Text_WaitUpPeeko) < 0x17
	.space 0x17 - (. - Route104_MrBrineysHouse_Text_WaitUpPeeko)
	.endif
	@ data/maps/Route104_MrBrineysHouse/scripts.inc:101 Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford
	.globl Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford
Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford: @ 0x08211749
	.string "おや? きみは たしか ピーコちゃんを\nたすけて くれた {PLAYER}{KUN}!\lそのせつは せわに なったのう!\p……なぬ? ふねに のりたい とな?\pふむふむ?\nムロに てがみを とどけて\lカイナへ にもつを とどける……\lなんだか いそがしいのう きみは\pじゃが それくらい おやすい ごようだ!\nわしに まかせて おきなさい!\lでは まず ムロに むかうとするか!{EOS}"
	.if (. - Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford) > 0xb5
	.error "Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford may not grow beyond its original slot"
	.endif
	.if (. - Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford) < 0xb5
	.space 0xb5 - (. - Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford)
	.endif
	@ data/maps/Route104_MrBrineysHouse/scripts.inc:114 Route104_MrBrineysHouse_Text_SetSailForDewford (+1 aliases)
	.globl gText_Rom_2117FE
gText_Rom_2117FE: @ 0x082117FE
	.string "ハギ『ムロタウン か\pよっしゃ! いくぞ ピーコちゃん!{EOS}"
	.if (. - gText_Rom_2117FE) > 0x1d
	.error "gText_Rom_2117FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2117FE) < 0x1d
	.space 0x1d - (. - gText_Rom_2117FE)
	.endif
	@ data/maps/Route104_MrBrineysHouse/scripts.inc:118 Route104_MrBrineysHouse_Text_DeclineDeliverySail
	.globl Route104_MrBrineysHouse_Text_DeclineDeliverySail
Route104_MrBrineysHouse_Text_DeclineDeliverySail: @ 0x0821181B
	.string "ハギ『そうかね\nたのまれごとは いいのかね?\pまあ ふねに のる ひつようが あるときは\nいつでも えんりょなく いっておくれ!{EOS}"
	.if (. - Route104_MrBrineysHouse_Text_DeclineDeliverySail) > 0x41
	.error "Route104_MrBrineysHouse_Text_DeclineDeliverySail may not grow beyond its original slot"
	.endif
	.if (. - Route104_MrBrineysHouse_Text_DeclineDeliverySail) < 0x41
	.space 0x41 - (. - Route104_MrBrineysHouse_Text_DeclineDeliverySail)
	.endif
	@ data/maps/Route104_MrBrineysHouse/scripts.inc:124 Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford
	.globl Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford
Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford: @ 0x0821185C
	.string "ハギ『きみの いいたいことは わかっとる!\pムロに てがみを とどけて\nカイナへ にもつを とどけるんだろう\pそれくらい おやすい ごようだ!\nわしに まかせて おきなさい!\lでは まず ムロに むかうとするか!{EOS}"
	.if (. - Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford) > 0x6b
	.error "Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford may not grow beyond its original slot"
	.endif
	.if (. - Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford) < 0x6b
	.space 0x6b - (. - Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford)
	.endif
	@ data/maps/Route104_MrBrineysHouse/scripts.inc:132 Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford
	.globl Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford
Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford: @ 0x082118C7
	.string "ハギ『きみの いいたいことは わかっとる!\pカイナの クスノキさんに\nにもつを とどけるんだろう\pそれくらい おやすい ごようだ!\nわしに まかせて おきなさい!\lでは まず ムロに むかうとするか!{EOS}"
	.if (. - Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford) > 0x65
	.error "Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford may not grow beyond its original slot"
	.endif
	.if (. - Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford) < 0x65
	.space 0x65 - (. - Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford)
	.endif
	@ data/maps/DewfordTown/scripts.inc:657 DewfordTown_Text_WhereAreWeBound (+2 aliases)
	.globl gText_Rom_21192C
gText_Rom_21192C: @ 0x0821192C
	.string "ハギ『やあ! きみのため なら\nいつでも ふねを だそう!\pきみが いきたいのは どこ かな?{EOS}"
	.if (. - gText_Rom_21192C) > 0x30
	.error "gText_Rom_21192C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21192C) < 0x30
	.space 0x30 - (. - gText_Rom_21192C)
	.endif
	@ data/maps/Route104_MrBrineysHouse/scripts.inc:145 Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail
	.globl Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail
Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail: @ 0x0821195C
	.string "ハギ『そうか…… きみは\nピーコちゃんの いのちの おんじんだ\pふねに のる ひつようが あるときは\nいつでも えんりょなく いっておくれ!{EOS}"
	.if (. - Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail) > 0x47
	.error "Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail may not grow beyond its original slot"
	.endif
	.if (. - Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail) < 0x47
	.space 0x47 - (. - Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail)
	.endif
	@ data/maps/Route104_MrBrineysHouse/scripts.inc:151 Route104_MrBrineysHouse_Text_Peeko
	.globl Route104_MrBrineysHouse_Text_Peeko
Route104_MrBrineysHouse_Text_Peeko: @ 0x082119A3
	.string "ピーコちゃん『ピー ピひょろー!{EOS}"
	.if (. - Route104_MrBrineysHouse_Text_Peeko) > 0x11
	.error "Route104_MrBrineysHouse_Text_Peeko may not grow beyond its original slot"
	.endif
	.if (. - Route104_MrBrineysHouse_Text_Peeko) < 0x11
	.space 0x11 - (. - Route104_MrBrineysHouse_Text_Peeko)
	.endif
	@ analyzed canonical ROM range 0x082119B4-0x08211BA0
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_Route104_PrettyPetalFlowerShop_OnTransition: @ 0x082119B4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082119BA
	.byte 0
EventScript_JP_082119BA: @ 0x082119BA
	setflag 0x089C
	checkflag 0x007F
	goto_if 0x00, EventScript_JP_082119D3
	checkflag 0x0869
	goto_if 0x00, EventScript_JP_082119D3
	setflag 0x0001
	end
EventScript_JP_082119D3: @ 0x082119D3
	setobjectxyperm 0x0001, 0x0004, 0x0006
	end
.globl EventScript_JP_082119DB
EventScript_JP_082119DB: @ 0x082119DB
	lock
	faceplayer
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08211A4C
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
	callstd 0x04
	checkflag 0x007F
	goto_if 0x01, EventScript_JP_08211A1A
	setflag 0x007F
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08211A3A
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08211A43
	release
	end
EventScript_JP_08211A1A: @ 0x08211A1A
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08211A3A
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08211A43
	release
	end
EventScript_JP_08211A3A: @ 0x08211A3A
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_BerriesExplanation
	callstd 0x04
	return
EventScript_JP_08211A43: @ 0x08211A43
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness
	callstd 0x04
	return
EventScript_JP_08211A4C: @ 0x08211A4C
	message FieldScriptText_243927
	waitmessage
	pokemartdecoration2 0x08211A64
	loadword 0x00, FieldScriptText_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x13, 0x00, 0x14, 0x00, 0x15, 0x00, 0x16, 0x00, 0x17, 0x00, 0x18, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
.globl EventScript_JP_08211A74
EventScript_JP_08211A74: @ 0x08211A74
	lock
	faceplayer
	checkflag 0x005E
	goto_if 0x00, EventScript_JP_08211A89
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
	callstd 0x04
	release
	end
EventScript_JP_08211A89: @ 0x08211A89
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
	callstd 0x04
	setorcopyvar 0x8000, 0x010C
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
	callstd 0x04
	setflag 0x005E
	release
	end
.globl EventScript_JP_08211AAA
EventScript_JP_08211AAA: @ 0x08211AAA
	lock
	faceplayer
	dotimebasedevents
	checkflag 0x0930
	goto_if 0x01, EventScript_JP_08211AEA
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
	callstd 0x04
	random 0x0008
	addvar 0x800D, 0x0085
	setorcopyvar 0x8000, 0x800D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0930
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
	callstd 0x04
	release
	end
EventScript_JP_08211AEA: @ 0x08211AEA
	loadword 0x00, Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
	callstd 0x04
	release
	end
	.byte 0x00
.globl EventScript_JP_08211AF5
EventScript_JP_08211AF5: @ 0x08211AF5
	lock
	faceplayer
	setvar 0x8008, 0x0002
	loadword 0x00, FieldScriptText_211BA1
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
.globl EventScript_JP_08211B0A
EventScript_JP_08211B0A: @ 0x08211B0A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8008, 0x0003
	checkflag 0x0115
	goto_if 0x01, EventScript_JP_08211B42
	loadword 0x00, FieldScriptText_211C09
	callstd 0x04
	setorcopyvar 0x8000, 0x00B5
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0115
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B42: @ 0x08211B42
	loadword 0x00, FieldScriptText_211C70
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
.globl EventScript_JP_08211B50
EventScript_JP_08211B50: @ 0x08211B50
	lock
	faceplayer
	setvar 0x8008, 0x0001
	loadword 0x00, FieldScriptText_211C95
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
.globl EventScript_JP_08211B65
EventScript_JP_08211B65: @ 0x08211B65
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8008, 0x0004
	checkflag 0x0004
	goto_if 0x01, EventScript_JP_08211B86
	loadword 0x00, FieldScriptText_211CE6
	callstd 0x04
	setflag 0x0004
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B86: @ 0x08211B86
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_211D95
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B94: @ 0x08211B94
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	@ event command: applymovement
	applymovement 0x8008, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
