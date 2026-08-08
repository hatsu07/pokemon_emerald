	@ field-script:0x22C059 FieldScriptText_22C786
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22C786
gText_Rom_22C786: @ 0x0822C786
	.string "ぼうけんしゃよ！！\pつれていける　ポケモンが\n3ひき　いないようですぞ！\pつれていく　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　ポケモンに　もたせている　どうぐは\nすべて　はずしてくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませんぞ！\pじゅんびが　できましたら\nまた　おこし　くだされ！$"
	.if (. - gText_Rom_22C786) != 0xb8
	.error "gText_Rom_22C786 must retain its original byte length"
	.endif
