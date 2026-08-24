	@ data/maps/VerdanturfTown/scripts.inc:64 VerdanturfTown_Text_ManTryingToDigTunnel
	.globl gText_Rom_1E60F0
gText_Rom_1E60F0: @ 0x081E60F0
	.string "わたしの パパが いってたの\pこの トンネルって おーきな おとに\nはんのうして さわぎだす おくびょうな\lポケモンが いっぱい なんだって!\pだから かいはつ こうじ やめたんだけど\nおとこの ひとが ひとりで\lトンネルを ほろうと してるんだって!{EOS}"
	.if (. - gText_Rom_1E60F0) > 0x7f
	.error "gText_Rom_1E60F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E60F0) < 0x7f
	.space 0x7f - (. - gText_Rom_1E60F0)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:67 VerdanturfTown_Text_ManDugTunnelForLove
	.globl gText_Rom_1E616F
gText_Rom_1E616F: @ 0x081E616F
	.string "あいする ひとの ために\nどうくつを ほっていた ひとが いるの!\pなんだか すごーい!{EOS}"
	.if (. - gText_Rom_1E616F) > 0x2d
	.error "gText_Rom_1E616F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E616F) < 0x2d
	.space 0x2d - (. - gText_Rom_1E616F)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:70 VerdanturfTown_Text_AirCleanHere
	.globl gText_Rom_1E619C
gText_Rom_1E619C: @ 0x081E619C
	.string "かざむきの かんけいで このまち には\nかざんばいが とんでくることは ない!\pくうきの おいしい このまちで くらせば\nからだが じょうぶでない ひとでも\lきっと げんきに なれる はずさ!{EOS}"
	.if (. - gText_Rom_1E619C) > 0x61
	.error "gText_Rom_1E619C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E619C) < 0x61
	.space 0x61 - (. - gText_Rom_1E619C)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:73 VerdanturfTown_Text_MakeBattleTentDebut
	.globl gText_Rom_1E61FD
gText_Rom_1E61FD: @ 0x081E61FD
	.string "ぼくと ぼくの ポケモン\nさいきん すごく ちょうしが よくてね\pバトルテント デビュー させたくて\nこの まちに きたんだ!{EOS}"
	.if (. - gText_Rom_1E61FD) > 0x40
	.error "gText_Rom_1E61FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E61FD) < 0x40
	.space 0x40 - (. - gText_Rom_1E61FD)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:76 VerdanturfTown_Text_GuyTryingToBustThroughCave
	.globl gText_Rom_1E623D
gText_Rom_1E623D: @ 0x081E623D
	.string "フレンドリィ ショップの となりに\nどうくつが あるだろ?\pなかを ふさいでいる いわを こわし\nとおれるように しようと がんばっている\lやつが いるらしいんだ!\pとおれるように なると いいのに……\nカナズミにも いきやすく なるから!{EOS}"
	.if (. - gText_Rom_1E623D) > 0x79
	.error "gText_Rom_1E623D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E623D) < 0x79
	.space 0x79 - (. - gText_Rom_1E623D)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:79 VerdanturfTown_Text_EasyToGetToRustboroNow
	.globl gText_Rom_1E62B6
gText_Rom_1E62B6: @ 0x081E62B6
	.string "フレンドリィ ショップの となりの\nどうくつが とおれるように なっただろ!\pカナズミまで デボンの しんせいひんを\nかいに いきやすくなって うれしいよ!{EOS}"
	.if (. - gText_Rom_1E62B6) > 0x4f
	.error "gText_Rom_1E62B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E62B6) < 0x4f
	.space 0x4f - (. - gText_Rom_1E62B6)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:82 VerdanturfTown_Text_TownSign
	.globl gText_Rom_1E6305
gText_Rom_1E6305: @ 0x081E6305
	.string "ここは シダケ タウン\nくさの においの かぜふく こうげん{EOS}"
	.if (. - gText_Rom_1E6305) > 0x1f
	.error "gText_Rom_1E6305 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6305) < 0x1f
	.space 0x1f - (. - gText_Rom_1E6305)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:85 VerdanturfTown_Text_WandasHouse
	.globl gText_Rom_1E6324
gText_Rom_1E6324: @ 0x081E6324
	.string "「ミチルの いえ」{EOS}"
	.if (. - gText_Rom_1E6324) > 0xa
	.error "gText_Rom_1E6324 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6324) < 0xa
	.space 0xa - (. - gText_Rom_1E6324)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:88 VerdanturfTown_Text_BattleTentSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E632E
gText_Rom_1E632E: @ 0x081E632E
	.string "バトルテント シダケタウン かいじょう\nみまもれ! ポケモンバトル{EOS}"
	.if (. - gText_Rom_1E632E) != 0x22
	.error "gText_Rom_1E632E must retain its original byte length"
	.endif
	.globl gText_Rom_1E634C
	.set gText_Rom_1E634C, gText_Rom_1E632E + 0x1e
	@ data/maps/Route116/scripts.inc:447 Route116_Text_RusturfTunnelSign (+1 aliases)
	.globl gText_Rom_1E6350
gText_Rom_1E6350: @ 0x081E6350
	.string "カナズミと シダケを むすぶ\n「カナシダ トンネル」\pかいつう こうじは ちゅうしに なりました{EOS}"
	.if (. - gText_Rom_1E6350) > 0x31
	.error "gText_Rom_1E6350 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6350) < 0x31
	.space 0x31 - (. - gText_Rom_1E6350)
	.endif
	@ Embedded ROM bytes: file offset 0x1E6381, size 0x36
	.byte 0x03, 0x8C, 0x63, 0x1E, 0x08, 0x05, 0x90, 0x63, 0x1E, 0x08, 0x00, 0x29, 0x75, 0x08, 0x02, 0xA6
	.byte 0x03, 0x02, 0x0F, 0x00, 0xF7, 0x63, 0x1E, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0xB7, 0x63, 0x1E
	.byte 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x29, 0x64, 0x1E, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x99
	.byte 0x64, 0x1E, 0x08, 0x09, 0x03, 0x02
