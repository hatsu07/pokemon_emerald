	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:221 LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall
LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall: @ 0x08206497
	.string "ここは とくべつ てんじしつ です{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall) > 0x12
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall) < 0x12
	.space 0x12 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:224 LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall
LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall: @ 0x082064A9
	.string "ごらんの とおり まだ\nえが かざられて おりません\pここには 1かいに あるような\nいわゆる めいが といった ものとは\lちがう えを かざりたいの ですよ!\pふるい めいが ばかりが\nげいじゅつ なのでは ありません!\pこの てんじしつ には……\pいまにも ポケモンが とびだして きそうな\nモダンで いきいきとした さくひんを\lかざって みたいのです!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall) > 0xb4
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall) < 0xb4
	.space 0xb4 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:227 LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit
	.globl LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit
LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit: @ 0x0820655D
	.string "つい ながながと しつれい しました\pあなたは まだ おわかいし\nたびを なさって いる ようだから\pいきいきとした ポケモンや\nそれを えがいた すてきな さくひんに\lであわれる かも しれません!\pもし そんな さくひんに であったら\nそのえを ここに かざれる ように\lあなたから おねがい して くださると\lたいへん うれしいです{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit) > 0xaa
	.error "LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit) < 0xaa
	.space 0xaa - (. - LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:230 LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit
	.globl LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit
LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit: @ 0x08206607
	.string "この てんじしつ には\nげんだいの いきいき とした ポケモンの\lえを かざりたい ものです{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit) > 0x2f
	.error "LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit) < 0x2f
	.space 0x2f - (. - LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:233 LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting
LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting: @ 0x08206636
	.string "おかげさまで えを\nかざる ことが できましたよ!\pあなたの ポケモン なんですって ね!\nほんとうに すばらしい です!\pどうも ありがとう……!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting) > 0x4b
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting) < 0x4b
	.space 0x4b - (. - LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:236 LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer
LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer: @ 0x08206681
	.string "あ あなた! {PLAYER}さん!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer) > 0xd
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer) < 0xd
	.space 0xd - (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:239 LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests
	.globl LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests
LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests: @ 0x0820668E
	.string "どうです みて ください!\nこの すばらしい さくひん たちを!\pどれも おたがいに\nひけをとらない すばらしさ!\pこの えの おかげで びじゅつかんに\nこられる かたも ふえたんです!\pほんとうに ありがとう {PLAYER}さん!\nわたしの ゆめが かないました!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests) > 0x81
	.error "LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests) < 0x81
	.space 0x81 - (. - LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:242 LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude
	.globl LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude
LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude: @ 0x0820670F
	.string "……これは わたしからの\nおれいの きもち です!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude) > 0x1a
	.error "LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude) < 0x1a
	.space 0x1a - (. - LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:245 LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou
	.globl LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou
LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou: @ 0x08206729
	.string "それでは また いらした ときに\nさしあげましょう{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou) > 0x1a
	.error "LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou) < 0x1a
	.space 0x1a - (. - LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:248 LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit
	.globl LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit
LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit: @ 0x08206743
	.string "やあ これは {PLAYER}さん!\pおいそがしい たびの あいまに\nおたちより くださって こうえいです!\pどうぞ ごゆっくり おすごしくださいね{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit) > 0x45
	.error "LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit) < 0x45
	.space 0x45 - (. - LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:251 LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame
LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame: @ 0x08206788
	.string "ももいろの かざりが ついた がくぶちだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame) > 0x16
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame) < 0x16
	.space 0x16 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:254 LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame
LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame: @ 0x0820679E
	.string "きいろの かざりが ついた がくぶちだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame) > 0x15
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame) < 0x15
	.space 0x15 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:257 LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame
LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame: @ 0x082067B3
	.string "あおい かざりが ついた がくぶちだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame) > 0x14
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame) < 0x14
	.space 0x14 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:260 LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame
LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame: @ 0x082067C7
	.string "あかい かざりが ついた がくぶちだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame) > 0x14
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame) < 0x14
	.space 0x14 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:263 LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame
LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame: @ 0x082067DB
	.string "みどりいろの かざりが ついた がくぶちだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame) > 0x17
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame) < 0x17
	.space 0x17 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:266 LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon: @ 0x082067F2
	.string "ポケモンの えが かざってある!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon) > 0x11
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon) < 0x11
	.space 0x11 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:269 LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe
	.globl LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe: @ 0x08206803
	.string "ひさしぶりに きて みたら 2かいにも\nえが かざって あって びっくり!\pいいなあ あたしの ポケモンも\nこんなふうに すてきに かいて ほしいな{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe) > 0x4b
	.error "LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe) < 0x4b
	.space 0x4b - (. - LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:272 LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing
	.globl LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing: @ 0x0820684E
	.string "ほう…… ここが さいきん わだいの\nポケモンの えが ある ところか……\pなるほど あたらしい えが いっぱいで\nなかなか おもしろい のう……{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing) > 0x4a
	.error "LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing) < 0x4a
	.space 0x4a - (. - LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:275 LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon
	.globl LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon
LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon: @ 0x08206898
	.string "へえー! これって\nきみの ポケモンの えなんだ!\pそれって トレーナー として\nさいこうの しあわせ だよな!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon) > 0x39
	.error "LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon) < 0x39
	.space 0x39 - (. - LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon)
	.endif
	@ analyzed canonical ROM range 0x082068D1-0x082073CF
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_ContestLobby_OnTransition_OnFrame: @ 0x082068D1
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082068DC
	.byte 0x02
	.4byte gMapScriptConditionTable_LilycoveCity_ContestLobby_OnFrame
	.byte 0
EventScript_JP_082068DC: @ 0x082068DC
	call EventScript_JP_08253F43
	call EventScript_JP_082068E7
	end
EventScript_JP_082068E7: @ 0x082068E7
	getpricereduction 0x0004
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082068FC
	clearflag 0x0369
	setflag 0x0340
	return
EventScript_JP_082068FC: @ 0x082068FC
	setflag 0x0369
	clearflag 0x0340
	return
gMapScriptConditionTable_LilycoveCity_ContestLobby_OnFrame: @ 0x08206903
	@ conditional map script table
	.2byte 0x4099, 0x0001
	.4byte EventScript_JP_08206915
	.2byte 0x4099, 0x0002
	.4byte EventScript_JP_08206AE7
	.2byte 0
EventScript_JP_08206915: @ 0x08206915
	checkflag 0x0307
	goto_if 0x01, EventScript_JP_08206924
	setvar 0x4099, 0x0000
	end
EventScript_JP_08206924: @ 0x08206924
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: addobject
	addobject 0x0004
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_WalkRightX4
	@ event command: waitmovement
	waitmovement 0x0004
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestLeft_1
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint
	callstd 0x04
	lockall
	fadescreen 0x01
	drawcontestwinner 0x00
	lockall
	loadword 0x00, LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820696A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082069A4
	releaseall
	end
EventScript_JP_0820696A: @ 0x0820696A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum
	callstd 0x04
	closemessage
	@ event command: special
	special SaveMuseumContestPainting
	setvar 0x4099, 0x0000
	specialvar_ 0x800D, 0x005B
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082069D4
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX8_1
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0004
	call EventScript_JP_08206A20
	call EventScript_JP_08206A76
	releaseall
	end
EventScript_JP_082069A4: @ 0x082069A4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820696A
	loadword 0x00, LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX8_1
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x4099, 0x0000
	@ event command: removeobject
	removeobject 0x0004
	releaseall
	end
EventScript_JP_082069D4: @ 0x082069D4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	incrementgamestat 0x2A
	@ event command: special
	special BufferContestWinnerMonName
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_1
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0004, LilycoveCity_LilycoveMuseum_2F_Movement_Delay16X4_WalkFastUpX3_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_ContestLobby_Text_TakeMementoOfPainting
	callstd 0x04
	playfanfare 0x0172
	loadword 0x00, LilycoveCity_ContestLobby_Text_ReceivedARibbon
	callstd 0x04
	waitfanfare
	loadword 0x00, LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	callstd 0x04
	loadword 0x00, LilycoveCity_ContestLobby_Text_OkaySeeYou
	callstd 0x04
	closemessage
	return
EventScript_JP_08206A20: @ 0x08206A20
	specialvar_ 0x8004, 0x0089
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206A62
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206A66
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206A6A
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206A6E
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08206A72
	return
EventScript_JP_08206A62: @ 0x08206A62
	clearflag 0x0308
	return
EventScript_JP_08206A66: @ 0x08206A66
	clearflag 0x0309
	return
EventScript_JP_08206A6A: @ 0x08206A6A
	clearflag 0x030A
	return
EventScript_JP_08206A6E: @ 0x08206A6E
	clearflag 0x030B
	return
EventScript_JP_08206A72: @ 0x08206A72
	clearflag 0x030C
	return
EventScript_JP_08206A76: @ 0x08206A76
	copyvar 0x8000, 0x8011
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206AB3
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206AB7
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206ABB
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206ABF
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206AC3
	return
EventScript_JP_08206AB3: @ 0x08206AB3
	setflag 0x00A0
	return
EventScript_JP_08206AB7: @ 0x08206AB7
	setflag 0x00A1
	return
EventScript_JP_08206ABB: @ 0x08206ABB
	setflag 0x00A2
	return
EventScript_JP_08206ABF: @ 0x08206ABF
	setflag 0x00A3
	return
EventScript_JP_08206AC3: @ 0x08206AC3
	setflag 0x00A4
	return
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_WalkRightX4: @ 0x08206AC7
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX8_1: @ 0x08206ACF
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestLeft_1: @ 0x08206AD8
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_1: @ 0x08206ADA
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_Delay16X4_WalkFastUpX3_WalkInPlaceFastestRight: @ 0x08206ADE
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_fastest_right
	step_end
EventScript_JP_08206AE7: @ 0x08206AE7
	checkflag 0x0307
	goto_if 0x01, EventScript_JP_08206AF6
	setvar 0x4099, 0x0000
	end
EventScript_JP_08206AF6: @ 0x08206AF6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: addobject
	addobject 0x000B
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_WalkLeftX5
	@ event command: waitmovement
	waitmovement 0x000B
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestRight_1
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint
	callstd 0x04
	lockall
	fadescreen 0x01
	drawcontestwinner 0x00
	loadword 0x00, LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08206B3A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08206B74
	end
EventScript_JP_08206B3A: @ 0x08206B3A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum
	callstd 0x04
	closemessage
	@ event command: special
	special SaveMuseumContestPainting
	setvar 0x4099, 0x0000
	specialvar_ 0x800D, 0x005B
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08206BA4
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX8_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x000B
	call EventScript_JP_08206A20
	call EventScript_JP_08206A76
	releaseall
	end
EventScript_JP_08206B74: @ 0x08206B74
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08206B3A
	loadword 0x00, LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX8_2
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x4099, 0x0000
	@ event command: removeobject
	removeobject 0x000B
	releaseall
	end
EventScript_JP_08206BA4: @ 0x08206BA4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	incrementgamestat 0x2A
	setflag 0x089B
	@ event command: special
	special BufferContestWinnerMonName
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_2
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000B, LilycoveCity_LilycoveMuseum_2F_Movement_Delay16X4_WalkFastUpX3_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_ContestLobby_Text_TakeMementoOfPainting
	callstd 0x04
	playfanfare 0x0172
	loadword 0x00, LilycoveCity_ContestLobby_Text_ReceivedARibbon
	callstd 0x04
	waitfanfare
	loadword 0x00, LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	callstd 0x04
	loadword 0x00, LilycoveCity_ContestLobby_Text_OkaySeeYou
	callstd 0x04
	closemessage
	return
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_WalkLeftX5: @ 0x08206BF3
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX8_2: @ 0x08206BFC
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestRight_1: @ 0x08206C05
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX3_2: @ 0x08206C07
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_Delay16X4_WalkFastUpX3_WalkInPlaceFastestLeft: @ 0x08206C0B
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_fastest_left
	step_end
.globl EventScript_JP_08206C14
EventScript_JP_08206C14: @ 0x08206C14
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ClearLinkContestFlags
	specialvar_ 0x800D, 0x005A
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08206C8F
	call EventScript_JP_08248AF4
	call EventScript_JP_08206D30
	@ event command: special
	special SetContestTrainerGfxIds
	call 0x0821DD5F
	call EventScript_JP_08206C45
	call EventScript_JP_08206CAF
	waitstate
	end
EventScript_JP_08206C45: @ 0x08206C45
	copyvar 0x8000, 0x8010
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206C77
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206C7D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206C83
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206C89
	return
EventScript_JP_08206C77: @ 0x08206C77
	setvar 0x4088, 0x0001
	return
EventScript_JP_08206C7D: @ 0x08206C7D
	setvar 0x4088, 0x0002
	return
EventScript_JP_08206C83: @ 0x08206C83
	setvar 0x4088, 0x0003
	return
EventScript_JP_08206C89: @ 0x08206C89
	setvar 0x4088, 0x0004
	return
EventScript_JP_08206C8F: @ 0x08206C8F
	setflag 0x0307
	copyvar 0x4094, 0x0001
	giveitem 0x010A, 0x0001
	setvar 0x800B, 0x0008
	setvar 0x8010, 0x0003
	setvar 0x4099, 0x0001
	setflag 0x089B
	end
EventScript_JP_08206CAF: @ 0x08206CAF
	setflag 0x0155
	copyvar 0x8000, 0x8011
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206CEF
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206CFC
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206D09
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206D16
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206D23
	return
EventScript_JP_08206CEF: @ 0x08206CEF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: setwarp
	setwarp MAP_ID_CONTEST_HALL_COOL, 0xFF, 0x0007, 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206CFC: @ 0x08206CFC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: setwarp
	setwarp MAP_ID_CONTEST_HALL_BEAUTY, 0xFF, 0x0007, 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D09: @ 0x08206D09
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: setwarp
	setwarp MAP_ID_CONTEST_HALL_CUTE, 0xFF, 0x0007, 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D16: @ 0x08206D16
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: setwarp
	setwarp MAP_ID_CONTEST_HALL_SMART, 0xFF, 0x0007, 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D23: @ 0x08206D23
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: setwarp
	setwarp MAP_ID_CONTEST_HALL_TOUGH, 0xFF, 0x0007, 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D30: @ 0x08206D30
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0001, LilycoveCity_LilycoveMuseum_2F_Movement_WalkLeftX2_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0047
	setmetatile 0x000C, 0x0002, 0x0221, 0x0001
	setmetatile 0x000C, 0x0003, 0x0261, 0x0001
	@ event command: special
	special DrawWholeMapView
	@ event command: applymovement
	applymovement 0x0001, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX2_WalkInPlaceFastestUp_1
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0047
	setmetatile 0x000C, 0x0002, 0x02D1, 0x0001
	setmetatile 0x000C, 0x0003, 0x02D9, 0x0001
	@ event command: special
	special DrawWholeMapView
	delay 0x0014
	@ event command: applymovement
	applymovement 0x0001, LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestRight_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestLeft_WalkLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, FieldScriptText_24A10A
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, LilycoveCity_LilycoveMuseum_2F_Movement_WalkLeftX3_WalkUpX3_Delay8_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_2F_Movement_WalkLeftX4_WalkUpX3_Delay8_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	return
LilycoveCity_LilycoveMuseum_2F_Movement_WalkLeftX4_WalkUpX3_Delay8_SetInvisible: @ 0x08206DA8
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestLeft_WalkLeft: @ 0x08206DB2
	@ object movement sequence
	walk_in_place_fastest_left
	walk_left
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkLeftX2_WalkInPlaceFastestDown: @ 0x08206DB5
	@ object movement sequence
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX2_WalkInPlaceFastestUp_1: @ 0x08206DB9
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_up
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkLeftX3_WalkUpX3_Delay8_SetInvisible: @ 0x08206DBD
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestRight_2: @ 0x08206DC6
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
.globl EventScript_JP_08206DC8
EventScript_JP_08206DC8: @ 0x08206DC8
	loadword 0x00, LilycoveCity_ContestLobby_Text_MasterRankHereICome
	callstd 0x02
	end
.globl EventScript_JP_08206DD1
EventScript_JP_08206DD1: @ 0x08206DD1
	loadword 0x00, LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere
	callstd 0x02
	end
.globl EventScript_JP_08206DDA
EventScript_JP_08206DDA: @ 0x08206DDA
	loadword 0x00, LilycoveCity_ContestLobby_Text_ContestFeastForEyes
	callstd 0x02
	end
.globl EventScript_JP_08206DE3
EventScript_JP_08206DE3: @ 0x08206DE3
	loadword 0x00, LilycoveCity_ContestLobby_Text_ToughContestIsExtreme
	callstd 0x02
	end
.globl EventScript_JP_08206DEC
EventScript_JP_08206DEC: @ 0x08206DEC
	loadword 0x00, LilycoveCity_ContestLobby_Text_LavishedCareOnMon
	callstd 0x02
	end
.globl EventScript_JP_08206DF5
EventScript_JP_08206DF5: @ 0x08206DF5
	loadword 0x00, LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily
	callstd 0x02
	end
.globl EventScript_JP_08206DFE
EventScript_JP_08206DFE: @ 0x08206DFE
	lockall
	fadescreen 0x01
	drawcontestwinner 0x01
	releaseall
	end
.globl EventScript_JP_08206E05
EventScript_JP_08206E05: @ 0x08206E05
	lockall
	fadescreen 0x01
	drawcontestwinner 0x02
	releaseall
	end
.globl EventScript_JP_08206E0C
EventScript_JP_08206E0C: @ 0x08206E0C
	lockall
	fadescreen 0x01
	drawcontestwinner 0x03
	releaseall
	end
.globl EventScript_JP_08206E13
EventScript_JP_08206E13: @ 0x08206E13
	lockall
	fadescreen 0x01
	drawcontestwinner 0x04
	releaseall
	end
.globl EventScript_JP_08206E1A
EventScript_JP_08206E1A: @ 0x08206E1A
	lockall
	fadescreen 0x01
	drawcontestwinner 0x05
	releaseall
	end
.globl EventScript_JP_08206E21
EventScript_JP_08206E21: @ 0x08206E21
	lockall
	fadescreen 0x01
	drawcontestwinner 0x06
	releaseall
	end
.globl EventScript_JP_08206E28
EventScript_JP_08206E28: @ 0x08206E28
	loadword 0x00, FieldScriptText_2587AE
	callstd 0x02
	end
.globl EventScript_JP_08206E31
EventScript_JP_08206E31: @ 0x08206E31
	loadword 0x00, FieldScriptText_2587BA
	callstd 0x02
	end
.globl EventScript_JP_08206E3A
EventScript_JP_08206E3A: @ 0x08206E3A
	lockall
	@ event command: special
	special ShowBerryBlenderRecordWindow
	waitbuttonpress
	@ event command: special
	special RemoveRecordsWindow
	releaseall
	end
.globl EventScript_JP_08206E44
EventScript_JP_08206E44: @ 0x08206E44
	lockall
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
	waitbuttonpress
	@ event command: special
	special RemoveRecordsWindow
	releaseall
	end
.globl EventScript_JP_08206E58
EventScript_JP_08206E58: @ 0x08206E58
	lock
	faceplayer
	loadword 0x00, BerryBlender_Text_BlendWithTheBlendMaster
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
.globl EventScript_JP_08206E68
EventScript_JP_08206E68: @ 0x08206E68
	lock
	loadword 0x00, BerryBlender_Text_WhoaAwesome
	callstd 0x04
	release
	end
.globl EventScript_JP_08206E73
EventScript_JP_08206E73: @ 0x08206E73
	lock
	loadword 0x00, BerryBlender_Text_WickedlyFast
	callstd 0x04
	release
	end
.globl EventScript_JP_08206E7E
EventScript_JP_08206E7E: @ 0x08206E7E
	lock
	loadword 0x00, BerryBlender_Text_WhatAnExpert
	callstd 0x04
	release
	end
.globl EventScript_JP_08206E89
EventScript_JP_08206E89: @ 0x08206E89
	lock
	faceplayer
	loadword 0x00, BerryBlender_Text_MadeAmazingPokeblocksWithMaster
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
.globl EventScript_JP_08206E99
EventScript_JP_08206E99: @ 0x08206E99
	lock
	faceplayer
	loadword 0x00, BerryBlender_Text_QualitiesOfBlendMaster
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
.globl EventScript_JP_08206EA9
EventScript_JP_08206EA9: @ 0x08206EA9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, BerryBlender_Text_MasterWorksOnSkillsInMountains
	callstd 0x04
	goto EventScript_JP_08206EB9
	.byte 0x02
EventScript_JP_08206EB9: @ 0x08206EB9
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08206EC6
EventScript_JP_08206EC6: @ 0x08206EC6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ClearLinkContestFlags
	lock
	faceplayer
	loadword 0x00, FieldScriptText_24A6FB
	callstd 0x04
	goto EventScript_JP_08206ED9
	.byte 0x02
EventScript_JP_08206ED9: @ 0x08206ED9
	message FieldScriptText_24A744
	waitmessage
	multichoice 0x00, 0x00, 0x02, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206F16
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206FCD
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	end
EventScript_JP_08206F16: @ 0x08206F16
	loadword 0x00, FieldScriptText_24A50F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820703F
	call 0x082423E9
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820703F
	message FieldScriptText_24AB68
	waitmessage
	specialvar_ 0x400D, 0x019C
	multichoice 0x00, 0x00, 0x55, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08206F7B
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206F86
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	end
EventScript_JP_08206F7B: @ 0x08206F7B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x400C, 0x0000
	goto EventScript_JP_08206F9C
	.byte 0x02
EventScript_JP_08206F86: @ 0x08206F86
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x400C, 0x0001
	compare_var_to_value 0x400D, 0x0001
	goto_if 0x01, EventScript_JP_082071BC
	goto EventScript_JP_08206F9C
	.byte 0x02
EventScript_JP_08206F9C: @ 0x08206F9C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message FieldScriptText_24A755
	waitmessage
	multichoice 0x00, 0x00, 0x04, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	copyvar 0x8011, 0x800D
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_08206FCD: @ 0x08206FCD
	message FieldScriptText_24A734
	waitmessage
	multichoice 0x00, 0x00, 0x54, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08207015
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08207023
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08207031
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206ED9
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08206ED9
	end
EventScript_JP_08207015: @ 0x08207015
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A86C
	callstd 0x04
	goto EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_08207023: @ 0x08207023
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A9B5
	callstd 0x04
	goto EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_08207031: @ 0x08207031
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24AA8A
	callstd 0x04
	goto EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_0820703F: @ 0x0820703F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CloseLink
	loadword 0x00, FieldScriptText_24A52D
	callstd 0x04
	release
	end
EventScript_JP_0820704C: @ 0x0820704C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A7AE
	callstd 0x04
	setvar 0x8010, 0x0000
	choosecontestmon
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_0820703F
	@ event command: special
	special TryEnterContestMon
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082070A0
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082070CA
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_082070CA
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_082070AE
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_082070BC
	end
EventScript_JP_082070A0: @ 0x082070A0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_249FDD
	callstd 0x04
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070AE: @ 0x082070AE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A790
	callstd 0x04
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070BC: @ 0x082070BC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A769
	callstd 0x04
	goto EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070CA: @ 0x082070CA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	copyvar 0x8008, 0x8004
	goto EventScript_JP_082070D5
	.byte 0x02
EventScript_JP_082070D5: @ 0x082070D5
	compare_var_to_value 0x400D, 0x0001
	goto_if 0x01, EventScript_JP_0820720B
	compare_var_to_value 0x400D, 0x0002
	goto_if 0x04, EventScript_JP_0820703F
	message gText_PleaseWaitForLink_Copy_Rom_24A65D
	waitmessage
	copyvar 0x8004, 0x800D
	compare_var_to_value 0x400C, 0x0000
	call_if 0x01, EventScript_JP_0820717B
	compare_var_to_value 0x400C, 0x0001
	call_if 0x01, EventScript_JP_08207180
	compare_var_to_value 0x400C, 0x0002
	goto_if 0x04, EventScript_JP_0820703F
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_08207193
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, EventScript_JP_08207193
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x800D, 0x0006
	goto_if 0x01, EventScript_JP_082071AF
	compare_var_to_value 0x800D, 0x000A
	goto_if 0x01, EventScript_JP_082071A1
	message3 FieldScriptText_24A60C
	contestlinktransfer
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082071D7
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08207185
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082071C9
	end
EventScript_JP_0820717B: @ 0x0820717B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special TryContestEModeLinkup
	waitstate
	return
EventScript_JP_08207180: @ 0x08207180
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special TryContestGModeLinkup
	waitstate
	return
EventScript_JP_08207185: @ 0x08207185
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A629
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_08207193: @ 0x08207193
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A646
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071A1: @ 0x082071A1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A801
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071AF: @ 0x082071AF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CloseLink
	loadword 0x00, Text_LinkErrorPleaseReset
	callstd 0x04
	release
	end
EventScript_JP_082071BC: @ 0x082071BC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CloseLink
	loadword 0x00, FieldScriptText_24AB11
	callstd 0x04
	release
	end
EventScript_JP_082071C9: @ 0x082071C9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, FieldScriptText_24A619
	callstd 0x04
	goto EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071D7: @ 0x082071D7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special GetContestPlayerId
	addvar 0x8004, 0x0001
	buffernumberstring 0x01, 0x8004
	messageautoscroll FieldScriptText_24A6AA
	waitmessage
	subvar 0x8004, 0x0001
	call EventScript_JP_08207309
	setvar 0x4086, 0x0001
	@ event command: special
	special SetLinkContestPlayerGfx
	setvar 0x4088, 0x0005
	setvar 0x8010, 0x0003
	call EventScript_JP_08206CAF
	end
EventScript_JP_0820720B: @ 0x0820720B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x8011, 0x0000
	call_if 0x01, EventScript_JP_08207248
	compare_var_to_value 0x8011, 0x0001
	call_if 0x01, EventScript_JP_0820724E
	compare_var_to_value 0x8011, 0x0002
	call_if 0x01, EventScript_JP_08207254
	compare_var_to_value 0x8011, 0x0003
	call_if 0x01, EventScript_JP_0820725A
	compare_var_to_value 0x8011, 0x0004
	call_if 0x01, EventScript_JP_08207260
	goto EventScript_JP_08207266
	.byte 0x02
EventScript_JP_08207248: @ 0x08207248
	setvar 0x8004, 0x000F
	return
EventScript_JP_0820724E: @ 0x0820724E
	setvar 0x8004, 0x0010
	return
EventScript_JP_08207254: @ 0x08207254
	setvar 0x8004, 0x0011
	return
EventScript_JP_0820725A: @ 0x0820725A
	setvar 0x8004, 0x0012
	return
EventScript_JP_08207260: @ 0x08207260
	setvar 0x8004, 0x0013
	return
EventScript_JP_08207266: @ 0x08207266
	message CableClub_Text_ChooseGroupLeader_Copy_Rom_24A7C2
	waitmessage
	multichoice 0x10, 0x06, 0x51, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082072CB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082072A3
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820703F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820703F
	end
EventScript_JP_082072A3: @ 0x082072A3
	call EventScript_JP_082072F3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082072FD
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08207266
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_082072A3
	release
	end
EventScript_JP_082072CB: @ 0x082072CB
	call EventScript_JP_082072F8
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082072FD
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_08207266
	compare_var_to_value 0x800D, 0x0008
	goto_if 0x01, EventScript_JP_082072CB
	release
	end
EventScript_JP_082072F3: @ 0x082072F3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BerryBlenderLinkBecomeLeader
	waitstate
	return
EventScript_JP_082072F8: @ 0x082072F8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BerryBlenderLinkJoinGroup
	waitstate
	return
EventScript_JP_082072FD: @ 0x082072FD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message3 FieldScriptText_24A60C
	contestlinktransfer
	goto EventScript_JP_082071D7
	.byte 0x02
EventScript_JP_08207309: @ 0x08207309
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	messageautoscroll FieldScriptText_24A6E8
	waitmessage
	delay 0x0014
	closemessage
	@ event command: applymovement
	applymovement 0x0002, LilycoveCity_LilycoveMuseum_2F_Movement_WalkRightX2_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0047
	setmetatile 0x0011, 0x0002, 0x0221, 0x0001
	setmetatile 0x0011, 0x0003, 0x0261, 0x0001
	@ event command: special
	special DrawWholeMapView
	@ event command: applymovement
	applymovement 0x0002, LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX2_WalkInPlaceFastestUp_2
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0047
	setmetatile 0x0011, 0x0002, 0x02D1, 0x0001
	setmetatile 0x0011, 0x0003, 0x02D9, 0x0001
	@ event command: special
	special DrawWholeMapView
	delay 0x0014
	@ event command: applymovement
	applymovement 0x0002, LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestLeft_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_2F_Movement_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	messageautoscroll FieldScriptText_24A10A
	waitmessage
	delay 0x0014
	closemessage
	call EventScript_JP_08249BC1
	@ event command: applymovement
	applymovement 0x0002, LilycoveCity_LilycoveMuseum_2F_Movement_WalkRightX4_WalkUpX3_Delay8_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_2F_Movement_WalkRightX5_WalkUpX3_Delay8_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	release
	return
LilycoveCity_LilycoveMuseum_2F_Movement_WalkRightX5_WalkUpX3_Delay8_SetInvisible: @ 0x08207390
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkRight: @ 0x0820739B
	@ object movement sequence
	walk_right
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkRightX2_WalkInPlaceFastestDown: @ 0x0820739D
	@ object movement sequence
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkDownX2_WalkInPlaceFastestUp_2: @ 0x082073A1
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_up
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkRightX4_WalkUpX3_Delay8_SetInvisible: @ 0x082073A5
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end
LilycoveCity_LilycoveMuseum_2F_Movement_WalkInPlaceFastestLeft_2: @ 0x082073AF
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
.globl EventScript_JP_082073B1
EventScript_JP_082073B1: @ 0x082073B1
	lock
	faceplayer
	checkflag 0x005F
	goto_if 0x01, EventScript_JP_082073C6
	loadword 0x00, LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase
	callstd 0x04
	release
	end
EventScript_JP_082073C6: @ 0x082073C6
	loadword 0x00, LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries
	callstd 0x04
	release
	end
