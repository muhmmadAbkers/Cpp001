
// Q1: First unique character → function firstUnique(str:string):string|null{const c:Record<string,number>={};for(const ch of str)c[ch]=(c[ch]||0)+1;for(const ch of str)if(c[ch]===1)return ch;return null;} console.log(firstUnique("aabbccdeef")); // d

// Q2: Flatten nested array → function flatten(arr:any[]):any[]{let r:any[]=[];for(const i of arr)Array.isArray(i)?r.push(...flatten(i)):r.push(i);return r;} console.log(flatten([1,[2,[3,4]],[5,6]]));

// Q3: Two Sum → function twoSum(nums:number[],target:number):number[]{const map=new Map<number,number>();for(let i=0;i<nums.length;i++){let need=target-nums[i];if(map.has(need))return [map.get(need)!,i];map.set(nums[i],i);}return [];} console.log(twoSum([2,7,11,15],9));
```
