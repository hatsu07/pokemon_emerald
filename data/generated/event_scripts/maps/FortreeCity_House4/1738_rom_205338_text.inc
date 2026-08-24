	@ data/maps/FortreeCity_House4/scripts.inc:65 FortreeCity_House4_Text_BringsWorldCloserTogether
	.globl gText_Rom_205255
gText_Rom_205255: @ 0x08205255
	.string "ポケモンと いることで\nなかの いい ともだちが ふえていく……\pこうして せかいは つながって いくのね!\nすてきだわ!{EOS}"
	.if (. - gText_Rom_205255) > 0x3e
	.error "gText_Rom_205255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205255) < 0x3e
	.space 0x3e - (. - gText_Rom_205255)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:68 FortreeCity_House4_Text_GoBirdPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205293
gText_Rom_205293: @ 0x08205293
	.string "それっ!\nゆけっ とりポケモン{EOS}"
	.if (. - gText_Rom_205293) != 0x10
	.error "gText_Rom_205293 must retain its original byte length"
	.endif
	.globl gText_Rom_20529E
	.set gText_Rom_20529E, gText_Rom_205293 + 0xb
	@ data/maps/FortreeCity_House4/scripts.inc:71 FortreeCity_House4_Text_AskedWingullToRunErrand
	.globl gText_Rom_2052A3
gText_Rom_2052A3: @ 0x082052A3
	.string "えへへ キャモメに\nちょっと おつかいを たのんだのさ{EOS}"
	.if (. - gText_Rom_2052A3) > 0x1c
	.error "gText_Rom_2052A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2052A3) < 0x1c
	.space 0x1c - (. - gText_Rom_2052A3)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:74 FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb
	.globl gText_Rom_2052BF
gText_Rom_2052BF: @ 0x082052BF
	.string "よーし!\nおかえり キャモメ!\pあれえ? なに もってるんだ?\pメンタルハーブ かあ……\nどこかで ひろったんだな\pでも ぼく トレーナーじゃ ないからな\nきみに あげるよ!{EOS}"
	.if (. - gText_Rom_2052BF) > 0x58
	.error "gText_Rom_2052BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2052BF) < 0x58
	.space 0x58 - (. - gText_Rom_2052BF)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:77 FortreeCity_House4_Text_FriendsFarAwayThanksToWingull
	.globl gText_Rom_205317
gText_Rom_205317: @ 0x08205317
	.string "キャモメの おかげで\nとおくの ともだちとも なかよし なのさ!{EOS}"
	.if (. - gText_Rom_205317) > 0x21
	.error "gText_Rom_205317 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205317) < 0x21
	.space 0x21 - (. - gText_Rom_205317)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl gText_Rom_205338
gText_Rom_205338: @ 0x08205338
	.string "キャモメ『ぴひょー!{EOS}"
	.if (. - gText_Rom_205338) > 0xb
	.error "gText_Rom_205338 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205338) < 0xb
	.space 0xb - (. - gText_Rom_205338)
	.endif
	@ analyzed canonical ROM range 0x08205343-0x08205368
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205343: @ 0x08205343
	.byte 0x00
.globl EventScript_JP_08205344
EventScript_JP_08205344: @ 0x08205344
	loadword 0x00, gText_Rom_205369
	callstd 0x02
	end
.globl EventScript_JP_0820534D
EventScript_JP_0820534D: @ 0x0820534D
	loadword 0x00, gText_Rom_2053A4
	callstd 0x02
	end
.globl EventScript_JP_08205356
EventScript_JP_08205356: @ 0x08205356
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, gText_Rom_2053E4
	callstd 0x04
	waitmoncry
	release
	end
