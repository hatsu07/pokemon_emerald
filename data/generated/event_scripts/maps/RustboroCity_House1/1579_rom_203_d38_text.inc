	@ data/maps/RustboroCity_House1/scripts.inc:33 RustboroCity_House1_Text_IllTradeIfYouWant
	.globl gText_Rom_203C72
gText_Rom_203C72: @ 0x08203C72
	.string "え?\nぼくの ポケモンが かわいい?\lウン しってるよー\pあっ どうしても って いうなら\nこうかん して あげても いいよ\pじゃあ ぼくの {STR_VAR_2}\n{STR_VAR_1} となら こうかん するよ{EOS}"
	.if (. - gText_Rom_203C72) > 0x5a
	.error "gText_Rom_203C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203C72) < 0x5a
	.space 0x5a - (. - gText_Rom_203C72)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:36 RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	.globl gText_Rom_203CCC
gText_Rom_203CCC: @ 0x08203CCC
	.string "えへへ……\nちゃんと かわいがってね{EOS}"
	.if (. - gText_Rom_203CCC) > 0x13
	.error "gText_Rom_203CCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CCC) < 0x13
	.space 0x13 - (. - gText_Rom_203CCC)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:39 RustboroCity_House1_Text_DoesntLookLikeMonToMe
	.globl gText_Rom_203CDF
gText_Rom_203CDF: @ 0x08203CDF
	.string "えー どうみても {STR_VAR_1}に\nみえないんだけど……{EOS}"
	.if (. - gText_Rom_203CDF) > 0x18
	.error "gText_Rom_203CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CDF) < 0x18
	.space 0x18 - (. - gText_Rom_203CDF)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:42 RustboroCity_House1_Text_YouDontWantToThatsOkay
	.globl gText_Rom_203CF7
gText_Rom_203CF7: @ 0x08203CF7
	.string "あ いやなら いいけど……\nせっかく かわいい ポケモンなのに{EOS}"
	.if (. - gText_Rom_203CF7) > 0x20
	.error "gText_Rom_203CF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CF7) < 0x20
	.space 0x20 - (. - gText_Rom_203CF7)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:45 RustboroCity_House1_Text_AnyPokemonCanBeCute
	.globl gText_Rom_203D17
gText_Rom_203D17: @ 0x08203D17
	.string "だいじに そだてると\nどんな ポケモンも すごく かわいいよねー{EOS}"
	.if (. - gText_Rom_203D17) > 0x21
	.error "gText_Rom_203D17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203D17) < 0x21
	.space 0x21 - (. - gText_Rom_203D17)
	.endif
	@ data/maps/RustboroCity_House1/scripts.inc:48 RustboroCity_House1_Text_AllSortsOfPlaces
	.globl gText_Rom_203D38
gText_Rom_203D38: @ 0x08203D38
	.string "いろんな ばしょに\nいろんな ポケモンが いる\lいろんな ひとも いる\pそれが たのしみで わしも\nいろんな ところに でかけるのさ!{EOS}"
	.if (. - gText_Rom_203D38) > 0x44
	.error "gText_Rom_203D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203D38) < 0x44
	.space 0x44 - (. - gText_Rom_203D38)
	.endif
	@ analyzed canonical ROM range 0x08203D7C-0x08203DBB
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203D7C: @ 0x08203D7C
	.byte 0x00
.globl EventScript_JP_08203D7D
EventScript_JP_08203D7D: @ 0x08203D7D
	lock
	faceplayer
	checkflag 0x0089
	goto_if 0x01, EventScript_JP_08203DA9
	loadword 0x00, gText_Rom_203DBC
	callstd 0x04
	setorcopyvar 0x8000, 0x0153
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0089
	loadword 0x00, gText_Rom_203E46
	callstd 0x04
	release
	end
EventScript_08203DA9: @ 0x08203DA9
EventScript_JP_08203DA9: @ 0x08203DA9
	loadword 0x00, gText_Rom_203E46
	callstd 0x04
	release
	end
.globl EventScript_JP_08203DB3
EventScript_JP_08203DB3: @ 0x08203DB3
	loadword 0x00, gText_Rom_203ED7
	callstd 0x02
	end
