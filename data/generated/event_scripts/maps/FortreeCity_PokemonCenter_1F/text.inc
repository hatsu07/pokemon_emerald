	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:30 FortreeCity_PokemonCenter_1F_Text_GoToSafariZone
	.globl FortreeCity_PokemonCenter_1F_Text_GoToSafariZone
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone: @ 0x08204C95
	.string "きみぃ\nポケモンずかん つくっておるのか?\pふむぅ 121ばん どうろの\nサファリゾーンに いっては どうかな?{EOS}"
	.if (. - FortreeCity_PokemonCenter_1F_Text_GoToSafariZone) > 0x39
	.error "FortreeCity_PokemonCenter_1F_Text_GoToSafariZone may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_PokemonCenter_1F_Text_GoToSafariZone) < 0x39
	.space 0x39 - (. - FortreeCity_PokemonCenter_1F_Text_GoToSafariZone)
	.endif
	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:33 FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat
	.globl FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat: @ 0x08204CCE
	.string "レコードコーナー つかってるかい?\pレコードって きろくの ことだろ\nきろくが いろいろ まざるって……\pよく わかんないけど すごいよな!\nワクワク しちゃうよ!{EOS}"
	.if (. - FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat) > 0x53
	.error "FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat) < 0x53
	.space 0x53 - (. - FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat)
	.endif
	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:36 FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav
	.globl FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav: @ 0x08204D21
	.string "おっ ポケナビ もってるな!\nおれと おんなじ だ\pポケナビの エントリーコール つかうと\nもういちど しょうぶ したがってる\lトレーナーが わかったり\lいつでも はなしが できるってのが\lすぐれもの だよな! さすが デボンだぜ!{EOS}"
	.if (. - FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav) > 0x75
	.error "FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav) < 0x75
	.space 0x75 - (. - FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav)
	.endif
	@ analyzed canonical ROM range 0x08204D96-0x08204E0A
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_08204DBE
EventScript_JP_08204DBE: @ 0x08204DBE
	lock
	faceplayer
	message FieldScriptText_24390F
	waitmessage
	pokemart 0x08204DD8
	loadword 0x00, FieldScriptText_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x16, 0x00, 0x15, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11
	.byte 0x00, 0x18, 0x00, 0x53, 0x00, 0x7D, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_08204DF0
EventScript_JP_08204DF0: @ 0x08204DF0
	loadword 0x00, FortreeCity_Mart_Text_SuperRepelBetter
	callstd 0x02
	end
.globl EventScript_JP_08204DF9
EventScript_JP_08204DF9: @ 0x08204DF9
	loadword 0x00, FortreeCity_Mart_Text_StockUpOnItems
	callstd 0x02
	end
.globl EventScript_JP_08204E02
EventScript_JP_08204E02: @ 0x08204E02
	loadword 0x00, FortreeCity_Mart_Text_RareCandyMakesMonGrow
	callstd 0x02
	end
