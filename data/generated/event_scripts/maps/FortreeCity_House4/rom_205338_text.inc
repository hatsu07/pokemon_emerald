	@ data/maps/FortreeCity_House4/scripts.inc:65 FortreeCity_House4_Text_BringsWorldCloserTogether
	.globl FortreeCity_House4_Text_BringsWorldCloserTogether
FortreeCity_House4_Text_BringsWorldCloserTogether: @ 0x08205255
	.string "ポケモンと いることで\nなかの いい ともだちが ふえていく……\pこうして せかいは つながって いくのね!\nすてきだわ!{EOS}"
	.if (. - FortreeCity_House4_Text_BringsWorldCloserTogether) > 0x3e
	.error "FortreeCity_House4_Text_BringsWorldCloserTogether may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House4_Text_BringsWorldCloserTogether) < 0x3e
	.space 0x3e - (. - FortreeCity_House4_Text_BringsWorldCloserTogether)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:68 FortreeCity_House4_Text_GoBirdPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FortreeCity_House4_Text_GoBirdPokemon
FortreeCity_House4_Text_GoBirdPokemon: @ 0x08205293
	.string "それっ!\nゆけっ とりポケモン{EOS}"
	.if (. - FortreeCity_House4_Text_GoBirdPokemon) != 0x10
	.error "FortreeCity_House4_Text_GoBirdPokemon must retain its original byte length"
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:71 FortreeCity_House4_Text_AskedWingullToRunErrand
	.globl FortreeCity_House4_Text_AskedWingullToRunErrand
FortreeCity_House4_Text_AskedWingullToRunErrand: @ 0x082052A3
	.string "えへへ キャモメに\nちょっと おつかいを たのんだのさ{EOS}"
	.if (. - FortreeCity_House4_Text_AskedWingullToRunErrand) > 0x1c
	.error "FortreeCity_House4_Text_AskedWingullToRunErrand may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House4_Text_AskedWingullToRunErrand) < 0x1c
	.space 0x1c - (. - FortreeCity_House4_Text_AskedWingullToRunErrand)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:74 FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb
	.globl FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb
FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb: @ 0x082052BF
	.string "よーし!\nおかえり キャモメ!\pあれえ? なに もってるんだ?\pメンタルハーブ かあ……\nどこかで ひろったんだな\pでも ぼく トレーナーじゃ ないからな\nきみに あげるよ!{EOS}"
	.if (. - FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb) > 0x58
	.error "FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb) < 0x58
	.space 0x58 - (. - FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:77 FortreeCity_House4_Text_FriendsFarAwayThanksToWingull
	.globl FortreeCity_House4_Text_FriendsFarAwayThanksToWingull
FortreeCity_House4_Text_FriendsFarAwayThanksToWingull: @ 0x08205317
	.string "キャモメの おかげで\nとおくの ともだちとも なかよし なのさ!{EOS}"
	.if (. - FortreeCity_House4_Text_FriendsFarAwayThanksToWingull) > 0x21
	.error "FortreeCity_House4_Text_FriendsFarAwayThanksToWingull may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House4_Text_FriendsFarAwayThanksToWingull) < 0x21
	.space 0x21 - (. - FortreeCity_House4_Text_FriendsFarAwayThanksToWingull)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl FortreeCity_House4_Text_Wingull_Copy_Rom_205338
FortreeCity_House4_Text_Wingull_Copy_Rom_205338: @ 0x08205338
	.string "キャモメ『ぴひょー!{EOS}"
	.if (. - FortreeCity_House4_Text_Wingull_Copy_Rom_205338) > 0xb
	.error "FortreeCity_House4_Text_Wingull_Copy_Rom_205338 may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House4_Text_Wingull_Copy_Rom_205338) < 0xb
	.space 0xb - (. - FortreeCity_House4_Text_Wingull_Copy_Rom_205338)
	.endif
	@ analyzed canonical ROM range 0x08205343-0x08205368
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205343: @ 0x08205343
	.byte 0x00
.globl EventScript_JP_08205344
EventScript_JP_08205344: @ 0x08205344
	loadword 0x00, FortreeCity_House5_Text_TreeHousesAreGreat
	callstd 0x02
	end
.globl EventScript_JP_0820534D
EventScript_JP_0820534D: @ 0x0820534D
	loadword 0x00, FortreeCity_House5_Text_AdaptedToNature
	callstd 0x02
	end
.globl EventScript_JP_08205356
EventScript_JP_08205356: @ 0x08205356
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, FortreeCity_House5_Text_Zigzagoon
	callstd 0x04
	waitmoncry
	release
	end
