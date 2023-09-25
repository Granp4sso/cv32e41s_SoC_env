
file=code/projects/E41S_DS_prova/bin/prova.bin
dev=/dev/ttyUSB1
entry=00100080

# Start

string_to_hex(){

	case $1 in
		"00") echo -en "\x00">$dev ;;	"01") echo -en "\x01">$dev ;;	"02") echo -en "\x02">$dev ;;	"03") echo -en "\x03">$dev ;;
		"04") echo -en "\x04">$dev ;;	"05") echo -en "\x05">$dev ;;	"06") echo -en "\x06">$dev ;;	"07") echo -en "\x07">$dev ;;
		"08") echo -en "\x08">$dev ;;	"09") echo -en "\x09">$dev ;;	"0a") echo -en "\x0a">$dev ;;	"0b") echo -en "\x0b">$dev ;;
		"0c") echo -en "\x0c">$dev ;;	"0d") echo -en "\x0d">$dev ;;	"0e") echo -en "\x0e">$dev ;;	"0f") echo -en "\x0f">$dev ;;
		
		"10") echo -en "\x10">$dev ;;	"11") echo -en "\x11">$dev ;;	"12") echo -en "\x12">$dev ;;	"13") echo -en "\x13">$dev ;;
		"14") echo -en "\x14">$dev ;;	"15") echo -en "\x15">$dev ;;	"16") echo -en "\x16">$dev ;;	"17") echo -en "\x17">$dev ;;
		"18") echo -en "\x18">$dev ;;	"19") echo -en "\x19">$dev ;;	"1a") echo -en "\x1a">$dev ;;	"1b") echo -en "\x1b">$dev ;;
		"1c") echo -en "\x1c">$dev ;;	"1d") echo -en "\x1d">$dev ;;	"1e") echo -en "\x1e">$dev ;;	"1f") echo -en "\x1f">$dev ;;
		
		"20") echo -en "\x20">$dev ;;	"21") echo -en "\x21">$dev ;;	"22") echo -en "\x22">$dev ;;	"23") echo -en "\x23">$dev ;;
		"24") echo -en "\x24">$dev ;;	"25") echo -en "\x25">$dev ;;	"26") echo -en "\x26">$dev ;;	"27") echo -en "\x27">$dev ;;
		"28") echo -en "\x28">$dev ;;	"29") echo -en "\x29">$dev ;;	"2a") echo -en "\x2a">$dev ;;	"2b") echo -en "\x2b">$dev ;;
		"2c") echo -en "\x2c">$dev ;;	"2d") echo -en "\x2d">$dev ;;	"2e") echo -en "\x2e">$dev ;;	"2f") echo -en "\x2f">$dev ;;
		
		"30") echo -en "\x30">$dev ;;	"31") echo -en "\x31">$dev ;;	"32") echo -en "\x32">$dev ;;	"33") echo -en "\x33">$dev ;;
		"34") echo -en "\x34">$dev ;;	"35") echo -en "\x35">$dev ;;	"36") echo -en "\x36">$dev ;;	"37") echo -en "\x37">$dev ;;
		"38") echo -en "\x38">$dev ;;	"39") echo -en "\x39">$dev ;;	"3a") echo -en "\x3a">$dev ;;	"3b") echo -en "\x3b">$dev ;;
		"3c") echo -en "\x3c">$dev ;;	"3d") echo -en "\x3d">$dev ;;	"3e") echo -en "\x3e">$dev ;;	"3f") echo -en "\x3f">$dev ;;
		
		"40") echo -en "\x40">$dev ;;	"41") echo -en "\x41">$dev ;;	"42") echo -en "\x42">$dev ;;	"43") echo -en "\x43">$dev ;;
		"44") echo -en "\x44">$dev ;;	"45") echo -en "\x45">$dev ;;	"46") echo -en "\x46">$dev ;;	"47") echo -en "\x47">$dev ;;
		"48") echo -en "\x48">$dev ;;	"49") echo -en "\x49">$dev ;;	"4a") echo -en "\x4a">$dev ;;	"4b") echo -en "\x4b">$dev ;;
		"4c") echo -en "\x4c">$dev ;;	"4d") echo -en "\x4d">$dev ;;	"4e") echo -en "\x4e">$dev ;;	"4f") echo -en "\x4f">$dev ;;
		
		"50") echo -en "\x50">$dev ;;	"51") echo -en "\x51">$dev ;;	"52") echo -en "\x52">$dev ;;	"53") echo -en "\x53">$dev ;;
		"54") echo -en "\x54">$dev ;;	"55") echo -en "\x55">$dev ;;	"56") echo -en "\x56">$dev ;;	"57") echo -en "\x57">$dev ;;
		"58") echo -en "\x58">$dev ;;	"59") echo -en "\x59">$dev ;;	"5a") echo -en "\x5a">$dev ;;	"5b") echo -en "\x5b">$dev ;;
		"5c") echo -en "\x5c">$dev ;;	"5d") echo -en "\x5d">$dev ;;	"5e") echo -en "\x5e">$dev ;;	"5f") echo -en "\x5f">$dev ;;
		
		"60") echo -en "\x60">$dev ;;	"61") echo -en "\x61">$dev ;;	"62") echo -en "\x62">$dev ;;	"63") echo -en "\x63">$dev ;;
		"64") echo -en "\x64">$dev ;;	"65") echo -en "\x65">$dev ;;	"66") echo -en "\x66">$dev ;;	"67") echo -en "\x67">$dev ;;
		"68") echo -en "\x68">$dev ;;	"69") echo -en "\x69">$dev ;;	"6a") echo -en "\x6a">$dev ;;	"6b") echo -en "\x6b">$dev ;;
		"6c") echo -en "\x6c">$dev ;;	"6d") echo -en "\x6d">$dev ;;	"6e") echo -en "\x6e">$dev ;;	"6f") echo -en "\x6f">$dev ;;
		
		"70") echo -en "\x70">$dev ;;	"71") echo -en "\x71">$dev ;;	"72") echo -en "\x72">$dev ;;	"73") echo -en "\x73">$dev ;;
		"74") echo -en "\x74">$dev ;;	"75") echo -en "\x75">$dev ;;	"76") echo -en "\x76">$dev ;;	"77") echo -en "\x77">$dev ;;
		"78") echo -en "\x78">$dev ;;	"79") echo -en "\x79">$dev ;;	"7a") echo -en "\x7a">$dev ;;	"7b") echo -en "\x7b">$dev ;;
		"7c") echo -en "\x7c">$dev ;;	"7d") echo -en "\x7d">$dev ;;	"7e") echo -en "\x7e">$dev ;;	"7f") echo -en "\x7f">$dev ;;
		
		"80") echo -en "\x80">$dev ;;	"81") echo -en "\x81">$dev ;;	"82") echo -en "\x82">$dev ;;	"83") echo -en "\x83">$dev ;;
		"84") echo -en "\x84">$dev ;;	"85") echo -en "\x85">$dev ;;	"86") echo -en "\x86">$dev ;;	"87") echo -en "\x87">$dev ;;
		"88") echo -en "\x88">$dev ;;	"89") echo -en "\x89">$dev ;;	"8a") echo -en "\x8a">$dev ;;	"8b") echo -en "\x8b">$dev ;;
		"8c") echo -en "\x8c">$dev ;;	"8d") echo -en "\x8d">$dev ;;	"8e") echo -en "\x8e">$dev ;;	"8f") echo -en "\x8f">$dev ;;
		
		"90") echo -en "\x90">$dev ;;	"91") echo -en "\x91">$dev ;;	"92") echo -en "\x92">$dev ;;	"93") echo -en "\x93">$dev ;;
		"94") echo -en "\x94">$dev ;;	"95") echo -en "\x95">$dev ;;	"96") echo -en "\x96">$dev ;;	"97") echo -en "\x97">$dev ;;
		"98") echo -en "\x98">$dev ;;	"99") echo -en "\x99">$dev ;;	"9a") echo -en "\x9a">$dev ;;	"9b") echo -en "\x9b">$dev ;;
		"9c") echo -en "\x9c">$dev ;;	"9d") echo -en "\x9d">$dev ;;	"9e") echo -en "\x9e">$dev ;;	"9f") echo -en "\x9f">$dev ;;
		
		"a0") echo -en "\xa0">$dev ;;	"a1") echo -en "\xa1">$dev ;;	"a2") echo -en "\xa2">$dev ;;	"a3") echo -en "\xa3">$dev ;;
		"a4") echo -en "\xa4">$dev ;;	"a5") echo -en "\xa5">$dev ;;	"a6") echo -en "\xa6">$dev ;;	"a7") echo -en "\xa7">$dev ;;
		"a8") echo -en "\xa8">$dev ;;	"a9") echo -en "\xa9">$dev ;;	"aa") echo -en "\xaa">$dev ;;	"ab") echo -en "\xab">$dev ;;
		"ac") echo -en "\xac">$dev ;;	"ad") echo -en "\xad">$dev ;;	"ae") echo -en "\xae">$dev ;;	"af") echo -en "\xaf">$dev ;;
		
		"b0") echo -en "\xb0">$dev ;;	"b1") echo -en "\xb1">$dev ;;	"b2") echo -en "\xb2">$dev ;;	"b3") echo -en "\xb3">$dev ;;
		"b4") echo -en "\xb4">$dev ;;	"b5") echo -en "\xb5">$dev ;;	"b6") echo -en "\xb6">$dev ;;	"b7") echo -en "\xb7">$dev ;;
		"b8") echo -en "\xb8">$dev ;;	"b9") echo -en "\xb9">$dev ;;	"ba") echo -en "\xba">$dev ;;	"bb") echo -en "\xbb">$dev ;;
		"bc") echo -en "\xbc">$dev ;;	"bd") echo -en "\xbd">$dev ;;	"be") echo -en "\xbe">$dev ;;	"bf") echo -en "\xbf">$dev ;;
		
		"c0") echo -en "\xc0">$dev ;;	"c1") echo -en "\xc1">$dev ;;	"c2") echo -en "\xc2">$dev ;;	"c3") echo -en "\xc3">$dev ;;
		"c4") echo -en "\xc4">$dev ;;	"c5") echo -en "\xc5">$dev ;;	"c6") echo -en "\xc6">$dev ;;	"c7") echo -en "\xc7">$dev ;;
		"c8") echo -en "\xc8">$dev ;;	"c9") echo -en "\xc9">$dev ;;	"ca") echo -en "\xca">$dev ;;	"cb") echo -en "\xcb">$dev ;;
		"cc") echo -en "\xcc">$dev ;;	"cd") echo -en "\xcd">$dev ;;	"ce") echo -en "\xce">$dev ;;	"cf") echo -en "\xcf">$dev ;;
		
		"d0") echo -en "\xd0">$dev ;;	"d1") echo -en "\xd1">$dev ;;	"d2") echo -en "\xd2">$dev ;;	"d3") echo -en "\xd3">$dev ;;
		"d4") echo -en "\xd4">$dev ;;	"d5") echo -en "\xd5">$dev ;;	"d6") echo -en "\xd6">$dev ;;	"d7") echo -en "\xd7">$dev ;;
		"d8") echo -en "\xd8">$dev ;;	"d9") echo -en "\xd9">$dev ;;	"da") echo -en "\xda">$dev ;;	"db") echo -en "\xdb">$dev ;;
		"dc") echo -en "\xdc">$dev ;;	"dd") echo -en "\xdd">$dev ;;	"de") echo -en "\xde">$dev ;;	"df") echo -en "\xdf">$dev ;;
		
		"e0") echo -en "\xe0">$dev ;;	"e1") echo -en "\xe1">$dev ;;	"e2") echo -en "\xe2">$dev ;;	"e3") echo -en "\xe3">$dev ;;
		"e4") echo -en "\xe4">$dev ;;	"e5") echo -en "\xe5">$dev ;;	"e6") echo -en "\xe6">$dev ;;	"e7") echo -en "\xe7">$dev ;;
		"e8") echo -en "\xe8">$dev ;;	"e9") echo -en "\xe9">$dev ;;	"ea") echo -en "\xea">$dev ;;	"eb") echo -en "\xeb">$dev ;;
		"ec") echo -en "\xec">$dev ;;	"ed") echo -en "\xed">$dev ;;	"ee") echo -en "\xee">$dev ;;	"ef") echo -en "\xef">$dev ;;
		
		"f0") echo -en "\xf0">$dev ;;	"f1") echo -en "\xf1">$dev ;;	"f2") echo -en "\xf2">$dev ;;	"f3") echo -en "\xf3">$dev ;;
		"f4") echo -en "\xf4">$dev ;;	"f5") echo -en "\xf5">$dev ;;	"f6") echo -en "\xf6">$dev ;;	"f7") echo -en "\xf7">$dev ;;
		"f8") echo -en "\xf8">$dev ;;	"f9") echo -en "\xf9">$dev ;;	"fa") echo -en "\xfa">$dev ;;	"fb") echo -en "\xfb">$dev ;;
		"fc") echo -en "\xfc">$dev ;;	"fd") echo -en "\xfd">$dev ;;	"fe") echo -en "\xfe">$dev ;;	"ff") echo -en "\xff">$dev ;;
	esac
}

# Load Size
size=$(printf '%08x\n' $(wc -c < $file))
string_to_hex "${size:6:2}"
string_to_hex "${size:4:2}"
string_to_hex "${size:2:2}"
string_to_hex "${size:0:2}"
echo "[flasher] file $file size is ${size:0:2} ${size:2:2} ${size:4:2} ${size:6:2}"

# Load Entry
string_to_hex "${entry:6:2}"
string_to_hex "${entry:4:2}"
string_to_hex "${entry:2:2}"
string_to_hex "${entry:0:2}"
echo "[flasher] Entry point is ${entry:0:2} ${entry:2:2} ${entry:4:2} ${entry:6:2}"

# Load Binary
bin=$(hexdump -e '16/1 "%02x " "\n"' $file)

for i in $bin
do	
	string_to_hex "$i"
done

